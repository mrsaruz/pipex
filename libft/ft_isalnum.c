/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:37:56 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/23 17:19:37 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_isalnum function checks whether a character, represented
by the integer c, is alphanumeric (a letter or a digit).
It takes an integer c and checks whether it is in the ranges of
lower case letters (‘a’ to ‘z’), upper case letters (‘A’ to ‘Z’)
or digits (‘0’ to ‘9’). Returns 1 if c is alphanumeric
and 0 if it is not.*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
