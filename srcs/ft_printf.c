/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenkato <kenkato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:59:03 by kentakato         #+#    #+#             */
/*   Updated: 2024/09/20 11:50:32 by kenkato          ###   ########.fr       */
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
	if (ft_is_vaild_format(format))
		return (0);
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
// #include <limits.h>

// int main()
// {
// 	long test1 = LONG_MIN;
// 	long test2 = LONG_MAX;
// 	int lib;
// 	int ft;
// 	lib = printf("%p, %p\n", &test1, &test2);
// 	ft = ft_printf("%p, %p\n", &test1, &test2);
// 	printf("lib: %d, ft: %d\n", lib, ft);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	int	dummy;
// 	int	dummy1;
// 	int	dummy2;
// 	int i;
// 	int j;
// 	int test;
// 	unsigned int test0;
// 	char *test1;

// 	i = ft_printf("%c\n", 65);
// 	j = printf("%c\n", 65);
// 	printf("ft: %d, lib: %d\n", i, j);

// 	i = ft_printf("%s\n", (char *)NULL);
// 	j = printf("%s\n", (char *)NULL);
// 	printf("ft: %d, lib: %d\n", i, j);
// 	i = ft_printf("%s\n", "Json");
// 	j = printf("%s\n", "Json");
// 	printf("ft: %d, lib: %d\n", i, j);

// 	test1 = NULL;
// 	test1 = "oiiiii";
// 	i = ft_printf("made : %p\n", test1);
// 	j = printf("real : %p\n", test1);
// 	printf("ft: %d, lib: %d\n", i, j);

// 	test = -2147483648;
// 	i = ft_printf("%d\n", test);
// 	j = printf("%d\n", test);
// 	printf("ft: %d, lib: %d\n", i, j);

// 	test = 2147483647;
// 	i = ft_printf("%i\n", test);
// 	j = printf("%i\n", test);
// 	printf("ft: %d, lib: %d\n", i, j);

// 	test = 2147483647;
// 	i = ft_printf("%u\n", test);
// 	j = printf("%u\n", test);
// 	printf("ft: %d, lib: %d\n", i, j);

// 	test = -2147483648;
// 	i = ft_printf("%x\n", test);
// 	j = printf("%x\n", test);
// 	printf("ft: %d, lib: %d\n", i, j);

// 	test0 = -1;
// 	i = ft_printf("%X\n", test0);
// 	j = printf("%X\n", test0);
// 	printf("ft: %d, lib: %d\n", i, j);

// 	i = ft_printf("%%%", "sf");
// 	j = printf("%%%", "sf");
// 	printf("ft: %d, lib: %d\n", i, j);

// 	dummy = 10;
// 	dummy1 = 12;
// 	dummy2 = 12;
// 	ft_printf("%d, %a, %d", dummy, dummy1, dummy2);
// 	printf("%d, %a, %d", dummy, dummy1, dummy2);
// }
