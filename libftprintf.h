/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:31:17 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/23 22:12:36 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *s, ...);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_puthex(unsigned int n);
int	ft_putx(unsigned int n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putadr(void	*n);
int	ft_printf_bonus(const char *s, ...);
int	ft_putchar(char c);

#endif
