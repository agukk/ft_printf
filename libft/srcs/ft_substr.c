/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:31:29 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/03 15:50:21 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, &s[start], len + 1);
	return (substr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	size_t	size;
// 	char	*ret;

// 	str = "01234";
// 	size = 0;
// 	ret = ft_substr(str, 10, size);
// 	printf("%s\n", ret);
// 	printf("%lu\n", strlen(ret));
// }
