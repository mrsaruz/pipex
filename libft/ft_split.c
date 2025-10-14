/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:17:24 by adruz-to          #+#    #+#             */
/*   Updated: 2025/05/14 13:21:03 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function splits a string into substrings using a specific delimiter
and returns an array of these substrings. It removes the delimiter and
correctly handles empty strings and strings without delimiters. In addition,
it dynamically allocates memory for the array and each substring, terminating
the array with a NULL pointer.*/

#include "libft.h"

static void	*ft_free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		i++;
	while (--i >= 0)
		free(split[i]);
	free(split);
	return (NULL);
}

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (!s || !*s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count ++;
			while (*s != c && *s)
				s++;
		}
	}
	return (count);
}

static size_t	ft_word_len(char const *s, char c)
{
	char	*next_delim;

	next_delim = ft_strchr(s, c);
	if (next_delim)
		return (next_delim - s);
	return (ft_strlen(s));
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	len;
	int		i;

	i = 0;
	dest = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !dest)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			len = ft_word_len(s, c);
			dest[i++] = ft_substr(s, 0, len);
			if (!dest[i - 1])
				return (ft_free_split(dest));
			s += len;
		}
	}
	dest[i] = NULL;
	return (dest);
}
