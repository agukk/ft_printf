/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenkato <kenkato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:38:14 by kentakato         #+#    #+#             */
/*   Updated: 2024/09/19 18:26:45 by kenkato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_handle_format(va_list *args, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(*args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(*args, char *));
	else if (format == 'p')
		len += ft_handle_pointer(args);
	else if (format == 'x')
		len += ft_putnbr_base(va_arg(*args, unsigned int), LOW_HEX_BASE, 16);
	else if (format == 'X')
		len += ft_putnbr_base(va_arg(*args, unsigned int), UP_HEX_BASE, 16);
	else if (format == 'u')
		len += ft_putnbr_base(va_arg(*args, unsigned int), DECIMAL_BASE, 10);
	else if (format == 'i' || format == 'd')
		len += ft_putnbr(va_arg(*args, int));
	else if (format == '%')
		len += ft_putchar('%');
	return (len);
}
