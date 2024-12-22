/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 10:03:42 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/18 15:25:20 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putx(unsigned int n)
{
	char	*strhex;
	int		cont;

	cont = 0;
	strhex = "0123456789ABCDEF";
	if (n >= 16)
	{
		cont = cont + ft_putx(n / 16);
	}
	write(1, &strhex[n % 16], 1);
	cont++;
	return (cont);
}
