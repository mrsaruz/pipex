/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 15:35:09 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 15:37:10 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function converts a lower case letter to upper case. If the character
is between ‘a’ and ‘z’, it subtracts 32 to convert it; otherwise, it returns it
unchanged. It is useful for converting text to uppercase.*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
