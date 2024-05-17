/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:29:42 by kentakato         #+#    #+#             */
/*   Updated: 2024/05/06 16:47:33 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (lst == NULL || f == NULL)
        return ;
    while (lst != NULL)
    {
        f(lst->content);
        lst = lst->next;
    }
}