/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:12:59 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 11:38:53 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function creates a new node for a linked list. It allocates memory 
for the node and checks whether the allocation was successful. If so, it
initialises the contents of the node with the value provided and sets its 
next pointer to NULL, indicating that it does not point to any other node.
Finally, it returns a pointer to the newly created node.*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (newnode == NULL)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}
