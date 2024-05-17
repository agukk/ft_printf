/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:11:16 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/13 00:02:35 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((s1 == NULL || s2 == NULL) && n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	printf("ft : %d, lib : %d\n", ft_strncmp("hello", NULL, 0), strncmp("hello", NULL, 0));
// 	printf("ft : %d, lib : %d\n", ft_strncmp("nope", ((void *)0), 3), strncmp("nope", ((void *)0), 3));
// 	printf("ft : %d\n", ft_strncmp("nope", ((void *)0), 3));
// 	printf("lib : %d\n", strncmp("nope", ((void *)0), 3));
// 	printf("ft : %d, lib : %d\n", ft_strncmp(((void *)0), ((void *)0), 3), strncmp(((void *)0), ((void *)0), 3));
// }