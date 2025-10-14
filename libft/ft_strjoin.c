/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:19:46 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 13:42:21 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function concatenates two strings, s1 and s2, into a new dynamically
allocated string. First, it checks that both strings are not NULL, then
allocates memory, copies s1, appends s2 to the end, and ends with a null
character. It returns the concatenated string, assuming ft_strlen is correctly
implemented.*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
