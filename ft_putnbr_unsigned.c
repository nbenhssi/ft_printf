/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 10:37:02 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/18 15:24:35 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	int	cont;

	cont = 0;
	if (n >= 10)
	{
		cont = cont + ft_putnbr_unsigned(n / 10);
	}
	n = n % 10 + '0';
	write(1, &n, 1);
	cont++;
	return (cont);
}
