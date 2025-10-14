/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:14:51 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/23 17:25:08 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_isascii function checks whether an integer c is in the range
of the ASCII character set, which spans the values 0 to 127.
It takes a single parameter and, using a condition, determines
whether c is greater than or equal to 0 and less than or equal to 127.
If both conditions are true, it returns 1, indicating that c is
a valid ASCII character, otherwise it returns 0.*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
