/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:59:03 by kentakato         #+#    #+#             */
/*   Updated: 2024/06/09 18:48:49 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		len;
	size_t	i;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
        {
            i++;
			len += ft_handle_format(&args, format[i]);
        }
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}

// #include <stdio.h>

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
