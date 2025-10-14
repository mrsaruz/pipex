/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:36:22 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/23 17:13:50 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_bzero is used to initialise a block of memory to zero, 
which is useful for avoiding junk data in structures or buffers. 
It calls memset to fill the targeted memory with zeros 
for a specified number of bytes.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
