/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:46:32 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 11:36:12 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is designed to return the last element of a linked list.
Its expected behaviour is to iterate through the linked list until it reaches
the last node and return it.*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
