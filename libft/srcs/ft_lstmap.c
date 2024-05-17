/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:51:03 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/12 20:54:03 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tail;
	t_list	*new_node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	head = NULL;
	if ((new_node = ft_lstnew(f(lst->content))) == NULL)
		return (NULL);
	ft_lstadd_back(&head, new_node);
	tail = head;
	lst = lst->next;
	while (lst != NULL)
	{
		if ((new_node = ft_lstnew(f(lst->content))) == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&tail, new_node);
		tail = tail->next;
		lst = lst->next;
	}
	return (head);
}
