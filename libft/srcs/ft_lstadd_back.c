/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 22:13:42 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/05 23:18:00 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	last = ft_lstlast(*lst);
	if (last == NULL)
	{
		*lst = new;
		return ;
	}
	last->next = new;
}

// #include <stdio.h>

// int main()
// {
//     t_list *l = ((void *)0);
// 	t_list *n = ft_lstnew(strdup("OK"));

// 	ft_lstadd_back(&l, n);

//     printf("%s\n", (char *)l->content);
// }