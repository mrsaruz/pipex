/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:42:57 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 15:08:51 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function compares two strings of characters up to a maximum of n
characters. It compares the characters one by one and returns 0 if they are
the same up to that point, or the difference between the differing characters
if a difference is found. If the end of the strings is reached before n,
it also considers that in the comparison.*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n > 1 && *s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (*(unsigned char *)s1 < *(unsigned char *)s2)
		return (-1);
	else if (*(unsigned char *)s1 > *(unsigned char *)s2)
		return (1);
	else
		return (0);
}
