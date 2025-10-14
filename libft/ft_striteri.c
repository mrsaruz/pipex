/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:35:41 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 13:29:32 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function applies a function to each character in a string, providing
the index and a pointer to the character. It checks whether the string or
function is NULL before iterating through the string, calling the function
for each character until the end. This allows specific transformations or
actions to be performed efficiently on each character in the string.*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
