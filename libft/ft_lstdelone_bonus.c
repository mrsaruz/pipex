/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:00:29 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 11:30:45 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function removes a node from a linked list. It receives a pointer 
to the node to delete and a function to free its contents. First, it checks 
that both are not null, then it uses the delete function to free the contents 
of the node, and finally it frees the node's memory. */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
