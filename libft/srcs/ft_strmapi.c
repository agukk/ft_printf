/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:20:44 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/04 22:04:32 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*str;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	test(unsigned int i, char c)
// {
// 	i = 0;
// 	c = 'A' - i;
// 	return (c);
// }