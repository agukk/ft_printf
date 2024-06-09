/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:45:07 by kentakato         #+#    #+#             */
/*   Updated: 2024/06/09 10:56:37 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int ft_putnbr_base(uintptr_t address, char *base, size_t base_len)
{
    // printf("%lu\n", address);
    if (address >= base_len)
        ft_putnbr_base(address / base_len, base, base_len);   
    
    ft_putchar(base[address % base_len]);
    return 11;
}