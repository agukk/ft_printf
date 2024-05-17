/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:59:03 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/17 20:58:27 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int ft_printf(const char *format, ...)
{
    va_list args;
    size_t i = 0;
    int total_len = 0;
    
    // printf("%s\n", format);
    va_start(args, format);
    // printf("arg_2: %d\n", va_arg(args, int));
    // printf("arg_3: %d\n", va_arg(args, int));
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
                total_len += ft_putptr(va_arg(args, char *));
            }
        }
        else
        {
            total_len += ft_putchar(format[i]);
        }
        i++;
    }
    va_end(args);
    return total_len;
}


int main()
{
    // char *arg_1 = "asdfg";
    // int arg_2 = 12;
    // double arg_3 = 3.14;

    // int i = ft_printf("%c\n", 65);
    // int j = printf("%c\n", 65);
    
    // int i = ft_printf("%s\n", "sdf");
    // int j = printf("%s\n", "sdf");
    
    char *test = "1234567890";
    // int i = ft_printf("%p\n", test);
    int j = printf("%p\n", test);
    // printf("ft: %d, lib: %d", i, j);
}
