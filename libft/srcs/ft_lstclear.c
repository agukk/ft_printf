/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:56:03 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/06 16:50:07 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
    if (lst == NULL || del == NULL || *lst == NULL)
		return ;
	while ((*lst)->next != NULL)
	{
		del((*lst)->content);
		(*lst) = (*lst)->next;
	}
	del((*lst)->content);
	free(*lst);
	*lst = NULL;
}
