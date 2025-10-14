/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:31:48 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 12:29:13 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function searches for the first occurrence of a character in a string.
If it finds the character, it returns a pointer to its position; if it does
not, it returns NULL. It also handles the null character case correctly,
returning a pointer to the end of the string if that character is 
searched for.*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}
