/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 20:40:44 by kentakato         #+#    #+#             */
/*   Updated: 2024/06/09 18:13:47 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putstr(char *str)
{
	size_t i = 0;

	if (str == NULL)
		return (write(1, "(null)", 6));

	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}