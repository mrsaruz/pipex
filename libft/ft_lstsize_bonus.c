/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:58:59 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 11:42:34 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function calculates the size of a linked list. It takes as a parameter
a pointer to the head of the list (lst) and returns an integer representing 
the number of elements in the list. It goes through the list node by node, 
incrementing a counter until it reaches the end, and on completion, returns 
the total number of nodes counted.*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
