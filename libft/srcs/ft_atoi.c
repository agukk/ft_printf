/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:40:15 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/12 12:38:18 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

static int	ft_is_overflow(long long num, int n, int sign)
{
	if (num * sign > LONG_MAX / 10 || (num * sign == LONG_MAX / 10
			&& n > LONG_MAX % 10))
		return (1);
	else if (num * sign < LONG_MIN / 10 || (num * sign == LONG_MIN / 10 && n >
			-1 * (LONG_MIN % 10)))
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long long	num;
	int			sign;

	num = 0;
	sign = 1;
	while (ft_is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		if (ft_is_overflow(num, *str - '0', sign) == 1)
			return ((int)LONG_MAX);
		else if (ft_is_overflow(num, *str - '0', sign) == -1)
			return ((int)LONG_MIN);
		num = num * 10 + *str - '0';
		str++;
	}
	return (num * sign);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("overflow -> lib : %d\n", atoi("-922337203685477580845678"));
// 	printf("overflow -> ft : %d\n", ft_atoi("-922337203685477580845678"));
// 	printf("underflow -> lib : %d\n", atoi("922337203685477580845678"));
// 	printf("underflow -> ft : %d\n", ft_atoi("922337203685477580845678"));
// 	printf("lib : %d\n", atoi("0000000000001"));
// 	printf("ft : %d\n", ft_atoi("0000000000001"));
// }