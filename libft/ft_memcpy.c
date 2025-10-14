/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:18:04 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 11:50:36 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function copies a block of memory from one location to another.
It takes three parameters: the destination pointer (dest), the source 
pointer (src), and the number of bytes to copy (n). Its goal is to transfer
data from src to dest byte by byte. At the end, it returns the pointer to the
destination, allowing it to be used in other operations. However, it does not
handle situations where memory blocks overlap; for that, memmove is
recommended.*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
