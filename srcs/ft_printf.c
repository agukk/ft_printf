/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:59:03 by kentakato         #+#    #+#             */
/*   Updated: 2024/06/09 18:14:33 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		total_len;

	i = 0;
	total_len = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				total_len += ft_putchar(va_arg(args, int));
			}
			else if (format[i] == 's')
			{
				total_len += ft_putstr(va_arg(args, char *));
			}
			else if (format[i] == 'p')
			{
				total_len += ft_putstr("0x");
				total_len += ft_putnbr_base(va_arg(args, uintptr_t),
						"0123456789abcdef", 16);
			}
			else if (format[i] == 'x')
			{
				total_len += ft_putnbr_base(va_arg(args, unsigned int),
						"0123456789abcdef", 16);
			}
			else if (format[i] == 'X')
			{
				total_len += ft_putnbr_base(va_arg(args, unsigned int),
						"0123456789ABCDEF", 16);
			}
			else if (format[i] == 'u')
			{
				total_len += ft_putnbr_base(va_arg(args, unsigned int),
						"0123456789", 10);
			}
			else if (format[i] == 'i' || format[i] == 'd')
			{
				total_len += ft_putnbr(va_arg(args, int));
			}
			else if (format[i] == '%')
			{
				total_len += ft_putchar('%');
			}
		}
		else
		{
			total_len += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (total_len);
}

// int main()
// {
//     printf("%lu\n", sizeof(va_list));
//     char *arg_1 = "asdfg";
//     int arg_2 = 12;
//     double arg_3 = 3.14;

//     int i = ft_printf("%c\n", 65);
//     int j = printf("%c\n", 65);

//     int i = ft_printf("%s\n", (char *)NULL);
//     int j = printf("%s\n", (char *)NULL);
//     printf("ft: %d, lib: %d", i, j);

//     char *test1 = "1234567890";
//     int i = ft_printf("made : %p\n", test1);
//     int j = printf("real : %p\n", test1);
//     printf("ft: %d, lib: %d", i, j);

//     unsigned int test = 0;
//     int i = ft_printf("%x\n", test);
//     int j = printf("%x\n", test);
//     printf("ft: %d, lib: %d", i, j);

//     unsigned int test = -1;
//     int i = ft_printf("%X\n", test);
//     int j = printf("%X\n", test);
//     printf("ft: %d, lib: %d", i, j);

//     int test = 1241241;
//     int i = ft_printf("%i\n", test);
//     int j = printf("%i\n", test);
//     printf("ft: %d, lib: %d", i, j);

//     int test = 12334234;
//     int i = ft_printf("%d\n", test);
//     int j = printf("%d\n", test);
//     printf("ft: %d, lib: %d", i, j);

//     int test = 3123;
//     int i = ft_printf("%u\n", test);
//     int j = printf("%u\n", test);
//     printf("ft: %d, lib: %d", i, j);

//     int i = ft_printf("%%%%\n");
//     int j = printf("%%%%\n");
//     printf("ft: %d, lib: %d", i, j);
// }
