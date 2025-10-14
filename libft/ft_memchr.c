/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:21:13 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 11:46:09 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is a function used to search for a specific byte in a block
of memory. Its behaviour is to examine a block of memory byte by byte, looking
for the first byte that matches a given value.*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
