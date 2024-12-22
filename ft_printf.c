/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhssi <nbenhssi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:35:02 by nbenhssi          #+#    #+#             */
/*   Updated: 2024/11/23 22:39:36 by nbenhssi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	fct(va_list k, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(k, int)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(k, int)));
	if (c == 's')
		return (ft_putstr(va_arg(k, char *)));
	if (c == 'x')
		return (ft_puthex(va_arg(k, unsigned int)));
	if (c == 'X')
		return (ft_putx(va_arg(k, unsigned int)));
	if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(k, unsigned int)));
	if (c == 'p')
		return (ft_putadr(va_arg (k, void *)));
	if (c == '%')
		return (ft_putchar('%'));
	else
	{
		write(1, "%", 1);
		write(1, &c, 1);
		return (2);
	}
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		cont;

	i = 0;
	cont = 0;
	if (!s)
		return (-1);
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%' && s[i + 1] == '\0')
			return (-1);
		if (s[i] == '%')
		{
			i++;
			cont += fct(args, s[i]);
		}
		else
			cont += write(1, &s[i], 1);
		i++;
	}
	va_end(args);
	return (cont);
}
// int main()
// {
// 	 char a ='A';
//     char b = 'B';
//     char *str ="noura";
//      int x = 0;
//     int c = 5;
//     ft_printf("caracters: %c%c int: %d string: %s hex: %x", a, b, c, str, x);
//      printf("\ncaracters: %c%c int: %d string: %s hex: %x", a, b, c, str, x);
//     int a=0;
//     int b=0;
//     int i = 255;
//     a =ft_printf("\n%d",i);
//     printf("--%d",a);
//      b = printf("\n%d",i);
//      printf("--%d",b);
//     ft_printf("%p",&c);
// 	int c = 0;
//     int a = ft_printf("%p", c);
// 	ft_printf("\n%d",a);
// 	printf("%p", c);
// }
// struct {
// 	unsigned int gp_offset ;
// 	unsigned int fp_offset ;
// 	void * gjhk;
// 	void *gjhk;
// }
