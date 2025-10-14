/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:55:49 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 15:27:45 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function searches for the last occurrence of a character (c) in a
string (s). If found, it returns a pointer to that position; otherwise,
it returns NULL.*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = ft_strlen(s);
	ptr = (char *)s;
	while (i >= 0)
	{
		if (ptr[i] == (char)c)
			return (&ptr[i]);
		i--;
	}
	return (NULL);
}
