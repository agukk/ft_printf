/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:45:07 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/19 09:37:50 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_putnbr_base(uintptr_t address, char *base, size_t base_len)
{   
    if (address >= base_len)
        ft_putnbr_base(address / base_len, base, base_len);   
    
    ft_putchar(base[address % base_len]);
    return 11;
}