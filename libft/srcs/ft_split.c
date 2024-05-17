/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:24:31 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/12 13:29:38 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	ft_cnt_str(char *str, char delimiter)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == delimiter)
			i++;
		if (str[i] != '\0')
			cnt++;
		while (str[i] != '\0' && str[i] != delimiter)
			i++;
	}
	return (cnt);
}

static char	*ft_get_splitted_str(char *s, char delimiter)
{
	char	*str;
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[len] != delimiter)
		len++;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	ft_free_all(char **strs, size_t index)
{
	size_t	i;

	i = 0;
	while (i < index)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static char	**ft_allocate_str(char **strs, char *str, char c)
{
	size_t	i;

	i = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && *str == c)
			str++;
		if (*str != '\0')
		{
			strs[i] = ft_get_splitted_str(str, c);
			if (strs[i] == NULL)
			{
				ft_free_all(strs, i);
				return (NULL);
			}
			i++;
		}
		while (*str != '\0' && *str != c)
			str++;
	}
	strs[i] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**strs;
	size_t	cnt;

	if (s == NULL)
		return (NULL);
	str = (char *)s;
	cnt = ft_cnt_str(str, c);
	strs = (char **)ft_calloc(cnt + 1, sizeof(char *));
	if (strs == NULL)
		return (NULL);
	strs = ft_allocate_str(strs, str, c);
	return (strs);
}

// #include <stdio.h>

// int main()
// {
//     char *s = "      split       this for   me  !       ";
// 	char **result = ft_split(s, ' ');
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%s\n", result[i]);
//     }
// }
