/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_vaild_format.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenkato <kenkato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:28:06 by kenkato           #+#    #+#             */
/*   Updated: 2024/09/19 20:20:39 by kenkato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_is_vaild_format(const char *format)
{
	int	i;

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				write(1, "Error: incomplete format specifier\n", 35);
				return (1);
			}
			if (!ft_strchr(VAILD_FORMATS, format[i]))
			{
				write(1, "Error: Undefined format\n", 24);
				return (1);
			}
		}
		i++;
	}
	return (0);
}
