/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 09:37:38 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/11 11:49:33 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dst == NULL && dstsize == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	i = 0;
	while (src[i] != '\0' && i < dstsize - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	char *dst = NULL;
// 	const char *src = "fasf";
// 	size_t dstsize = 0;
// 	printf("lib -> len : %lu, dst: %s\n", strlcat(dst, src, dstsize), dst);
// 	printf("ft -> len : %lu, dst: %s\n", ft_strlcat(dst, src, dstsize), dst);
// }