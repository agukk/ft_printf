/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:57:06 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/05 20:16:18 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
    *lst = new;   
}

// #include <stdio.h>

// int main()
// {
//     char *test1 = "first?";
//     char *test2 = "first!";
//     t_list *node = ft_lstnew(test1);
//     t_list **lst = &node;
//     t_list *new = ft_lstnew(test2);
//     printf("The address of a pointer to the first link of a list : %p, node : %p, node_content : %s\n", *lst, node, (char *)(*lst)->content);
//     ft_lstadd_front(lst, new);
//     printf("The address of a pointer to the first link of a list : %p, new_node : %p, new_node_content : %s\n", *lst, new, (char *)(*lst)->content);
// }