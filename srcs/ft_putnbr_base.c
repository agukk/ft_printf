/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenkato <kenkato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:45:07 by kentakato         #+#    #+#             */
/*   Updated: 2024/09/20 11:30:42 by kenkato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_numlen(unsigned int number, size_t base_len)
{
	int	len;

	len = 0;
	if (number == 0)
		return (1);
	while (number > 0)
	{
		number /= base_len;
		len++;
	}
	return (len);
}

int	ft_putnbr_base(unsigned int number, char *base, size_t base_len)
{
	if (number >= base_len)
		ft_putnbr_base(number / base_len, base, base_len);
	ft_putchar(base[number % base_len]);
	return (ft_numlen(number, base_len));
}
