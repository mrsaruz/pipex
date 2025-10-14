/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:37:02 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 14:59:58 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function transforms a string by applying a custom function to each
character, using its index. If the input string is NULL or the memory
allocation fails, it returns NULL. Otherwise, it returns a new string with
the transformed characters and ends with a null character.*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
