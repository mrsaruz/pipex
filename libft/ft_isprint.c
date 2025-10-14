/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:26:38 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/23 17:28:40 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_isprint function checks whether a character is ASCII printable.
It receives a parameter c representing the ASCII code of the character and
checks whether it is in the range 32 to 126. If c is within this range,
the function returns 1, indicating that the character is printable;
otherwise, it returns 0. Printable characters include letters,
numbers and punctuation marks, excluding control characters.*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
