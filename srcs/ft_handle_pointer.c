/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenkato <kenkato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:21:17 by kenkato           #+#    #+#             */
/*   Updated: 2024/09/19 18:28:20 by kenkato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_handle_pointer(va_list *args)
{
	int		len;
	void	*ptr;

	len = 0;
	ptr = va_arg(*args, void *);
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	len += ft_putstr("0x");
	len += ft_putnbr_base((uintptr_t)ptr, LOW_HEX_BASE, 16);
	return (len);
}
