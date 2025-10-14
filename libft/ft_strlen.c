/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:13:23 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 13:59:21 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function calculates the length of a string of characters. It takes a
pointer to char and uses a loop to count characters until it finds the null
character. It returns the total number of characters counted, representing
the length of the string.*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
