/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:59:03 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/17 19:34:39 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int ft_printf(const char *format, ...)
{
    va_list args;
    size_t i = 0;
    int total_len = 0;
    
    printf("%s\n", format);
    va_start(args, format);
    // printf("arg_2: %d\n", va_arg(args, int));
    // printf("arg_3: %d\n", va_arg(args, int));
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            
        }
        else
        {
            total_len += ft_putchar();
        }
        i++;
    }
    va_end(args);
    return total_len;
}


int main()
{
    char *arg_1 = "asdfg";
    int arg_2 = 12;
    double arg_3 = 3.14;
    // ft_printf("%d,", 12);
    printf("%c,,,", 65);
}
