/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 21:55:40 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/05 22:12:36 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     t_list *l;
// 	t_list *expected;
// 	t_list *actual;

// 	l = ft_lstnew(strdup("1"));
// 	l->next = ft_lstnew(strdup("2"));
// 	l->next->next = ft_lstnew(strdup("3"));
// 	expected = l->next->next;
// 	actual = ft_lstlast(l);
//     printf("%s\n", (char *)actual->content);
// }