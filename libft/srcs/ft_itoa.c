/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:43:41 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/11 12:33:26 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	ft_intlen(int n)
{
	size_t		len;
	long long	num;

	len = 1;
	num = n;
	if (num < 0)
	{
		num *= -1;
		len++;
	}
	while (num >= 10)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	long long	num;
	size_t		len;

	len = ft_intlen(n);
	num = n;
	if (num < 0)
		num *= -1;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (len > 0)
	{
		str[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	if (n < 0)
		str[len] = '-';
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	size_t res = intlen(-12);
// 	printf("%zu\n", res);

// 	char *res = ft_itoa(INT_MIN);
// 	printf("INT_MIN : %s\n", res);
// 	char *res1 = ft_itoa(-1);
// 	printf("%s\n", res1);
// 	char *res2 = ft_itoa(-100);
// 	printf("%s\n", res2);
// }