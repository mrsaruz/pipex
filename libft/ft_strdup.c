/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:50:38 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 13:10:44 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function creates a copy of a character string, reserving dynamic
memory for it. It calculates the length of the string, allocates memory,
copies the characters, and appends a null character to the end. It returns
a pointer to the new string, which is independent of the original string.*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
