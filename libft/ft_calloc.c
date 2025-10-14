/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:29:10 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/23 17:14:27 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* calloc is used to allocate dynamic memory by initialising all bytes
in the block to zero. It works in two steps: first, it calculates the total 
size needed by multiplying the number of elements by the size of each element, 
and then it reserves that memory. Next, it allocates the memory and clears it, 
ensuring that it is ready for use, often by calling memset.*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
