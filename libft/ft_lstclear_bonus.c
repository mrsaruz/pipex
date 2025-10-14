/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:10:20 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/23 18:08:56 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** This function removes and frees each node in a linked list
lst: pointer to the pointer to the first node in the list
del: function that removes the contents of a node.
This function traverses the linked list and removes
each node using the ‘del’ function to free the contents
of the node and ‘free’ to free the node itself.
At the end, the pointer to the first node is set to NULL.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}
