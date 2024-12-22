/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 09:55:41 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/18 15:25:04 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(unsigned int n)
{
	char	*strhex;
	int		cont;

	cont = 0;
	strhex = "0123456789abcdef";
	if (n >= 16)
		cont = cont + ft_puthex(n / 16);
	write(1, &strhex[n % 16], 1);
	cont++;
	return (cont);
}
