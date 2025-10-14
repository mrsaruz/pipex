/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:21:24 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 15:33:40 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function extracts a substring from the string s, starting from index
start and with a maximum length of len. It handles out-of-bounds indices,
allocates memory for the new substring, and ensures that it is terminated
with a null character. Provides a safe way to get a specific portion of
a string.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}
