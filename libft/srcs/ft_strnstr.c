/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:40:58 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/13 00:06:47 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (haystack == NULL && len == 0)
		return (NULL);
	if (*haystack == '\0' && *needle == '\0')
		return ("");
	needle_len = ft_strlen(needle);
	while (*haystack != '\0' && needle_len <= len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("ft : %s, lib : %s\n", ft_strnstr("", "", 1), strnstr("", "", 1));
// }
