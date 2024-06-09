/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:45:07 by kentakato         #+#    #+#             */
/*   Updated: 2024/06/10 07:48:48 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_ptrlen(uintptr_t address, size_t base_len)
{
	int	len;

	len = 0;
	if (address == 0)
		return (1);
	while (address > 0)
	{
		address /= base_len;
		len++;
	}
	return (len);
}

int	ft_putnbr_base(uintptr_t address, char *base, size_t base_len)
{
	if (address >= base_len)
		ft_putnbr_base(address / base_len, base, base_len);
	ft_putchar(base[address % base_len]);
	return (ft_ptrlen(address, base_len));
}
