/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 12:56:52 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/13 00:06:53 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	s_len;

	s_len = ft_strlen(s);
	str = (char *)s;
	if (str[s_len] == (char)c)
		return (&str[s_len]);
	while (s_len--)
	{
		if (str[s_len] == (char)c)
			return (&str[s_len]);
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	const char *s = "Asdfghjkl";
// 	int c = 65;
// 	printf("lib: %s\n", strrchr(s, c));
// 	printf("ft: %s\n", ft_strrchr(s, c));
// }