/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:25:55 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/03 20:16:21 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	s1_len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	s1_len = ft_strlen(s1);
	while (i < s1_len && ft_strchr(set, s1[s1_len - 1]))
		s1_len--;
	str = (char *)ft_calloc(s1_len - i + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s1[i], s1_len - i + 1);
	return (str);
}
