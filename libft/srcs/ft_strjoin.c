/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:53:49 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/03 17:22:50 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	total_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)ft_calloc(total_len, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, total_len);
	return (str);
}

// #include <stdio.h>

// int main()
// {
//     char *s1 = "Hello";
//     char *s2 = "World";
//     char *res = ft_strjoin(s1, s2);
//     printf("%s\n", res);
// }
