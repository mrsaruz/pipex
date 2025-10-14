/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:27:40 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 13:55:23 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function concatenates the string src to the end of dst, without
exceeding a specified maximum size. It first calculates the length of dst up
to the size limit, then copies characters from src to dst, leaving space for
a null character. Finally, if there is space, it appends the null character
to the end and returns the total length the resulting string would have if it
had been fully concatenated.*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
