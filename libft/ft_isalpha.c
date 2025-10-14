/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:02:14 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/23 17:49:01 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The function ft_isalpha, checks whether a character, represented
by the integer c, is a letter of the alphabet (either upper or lower case).
If c is in the range ‘a’ to ‘z’ or ‘A’ to ‘Z’, the function returns 1;
otherwise, it returns 0.*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
