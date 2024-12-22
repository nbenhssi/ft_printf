/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 10:58:23 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/23 18:07:48 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_hex(unsigned long p)
{
	char	*strhex;
	int		cont;

	cont = 0;
	strhex = "0123456789abcdef";
	if (p >= 16)
		cont += ft_print_hex(p / 16);
	write(1, &strhex[p % 16], 1);
	return (cont + 1);
}

int	ft_putadr(void *n)
{
	unsigned long	p;
	int				cont;

	if (n == 0)
		return (ft_putstr("(nil)"));
	p = (unsigned long)n;
	cont = write(1, "0x", 2);
	return (cont + ft_print_hex(p));
}
