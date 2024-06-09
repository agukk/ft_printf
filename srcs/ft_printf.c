/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:59:03 by kentakato         #+#    #+#             */
/*   Updated: 2024/06/09 11:03:00 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int ft_printf(const char *format, ...)
{
    va_list args;
    size_t i = 0;
    int total_len = 0;
    
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
                total_len += ft_putnbr_base(va_arg(args, uintptr_t), "0123456789abcdef", 16);
            }
            else if (format[i] == 'x')
            {
                total_len += ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef", 16);
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
    printf("%lu\n", sizeof(va_list));
    // char *arg_1 = "asdfg";
    // int arg_2 = 12;
    // double arg_3 = 3.14;

    // int i = ft_printf("%c\n", 65);
    // int j = printf("%c\n", 65);
    
    // int i = ft_printf("%s\n", "sdf");
    // int j = printf("%s\n", "sdf");
    // char *test1 = "1234567890";
    // int i = ft_printf("%p\n", test1);
    // int j = printf("%p\n", test1);
    // printf("ft: %d, lib: %d", i, j);
    
    unsigned int test = 12345678;
    int i = ft_printf("%x\n", test);
    int j = printf("%x\n", test);
    printf("ft: %d, lib: %d", i, j);
    
    // unsigned int test = 12;
    // int i = ft_printf("%x\n", test);
    // int j = printf("%x\n", test);
    // printf("ft: %d, lib: %d", i, j);

    // unsigned long x = 0x10434bfa8;
    // while (x >= 1)
    // {
    //     printf("%c", "0123456789abcdef"[x % 16]);
    //     x /= 16;
    // }
}
