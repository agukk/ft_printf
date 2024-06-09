/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:38:14 by kentakato         #+#    #+#             */
/*   Updated: 2024/06/09 18:45:08 by kentakato        ###   ########.fr       */
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
	{
		len += ft_putstr("0x");
		len += ft_putnbr_base(va_arg(*args, uintptr_t), L_H_B, 16);
	}
	else if (format == 'x')
		len += ft_putnbr_base(va_arg(*args, unsigned int), L_H_B, 16);
	else if (format == 'X')
		len += ft_putnbr_base(va_arg(*args, unsigned int), U_H_B, 16);
	else if (format == 'u')
		len += ft_putnbr_base(va_arg(*args, unsigned int), D_B, 10);
	else if (format == 'i' || format == 'd')
		len += ft_putnbr(va_arg(*args, int));
	else if (format == '%')
		len += ft_putchar('%');
	return (len);
}
