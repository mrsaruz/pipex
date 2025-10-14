/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:56:08 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/23 17:31:56 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_lstadd_back function adds a new element to the end
of a linked list. It takes two parameters: a pointer to a pointer
to the list (t_list **lst), which allows the original list
to be modified, and a pointer to the new node (t_list *new).
If the list is empty, the new node becomes the first element;
otherwise, the function traverses the list to the last node
and adds the new node at the end.*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = *lst;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
}
