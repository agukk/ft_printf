/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenkato <kenkato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:21:17 by kenkato           #+#    #+#             */
/*   Updated: 2024/09/20 11:36:37 by kenkato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_ptrlen(uintptr_t number, size_t base_len)
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

static int	ft_putptr(uintptr_t number, char *base, size_t base_len)
{
	if (number >= base_len)
		ft_putptr(number / base_len, base, base_len);
	ft_putchar(base[number % base_len]);
	return (ft_ptrlen(number, base_len));
}


int	ft_handle_pointer(va_list *args)
{
	int		len;
	void	*ptr;

	len = 0;
	ptr = va_arg(*args, void *);
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	len += ft_putstr("0x");
	len += ft_putptr((uintptr_t)ptr, LOW_HEX_BASE, 16);
	return (len);
}
