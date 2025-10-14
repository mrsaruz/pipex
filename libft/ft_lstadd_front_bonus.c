/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:26:59 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/23 18:06:44 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_lstadd_back function adds a new element to the
end of a linked list. It takes two parameters: a pointer
to a pointer to the list (t_list **lst), which allows
the original list to be modified, and a pointer to
the new node (t_list *new). If the list is empty,
the new node becomes the first element; otherwise,
the function traverses the list to the
last node and adds the new node at the end.*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
