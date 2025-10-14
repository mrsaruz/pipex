/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:28:11 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/23 17:26:47 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The ft_isdigit function receives a parameter c of type int,
which represents a character in its ASCII value, and checks
whether it is in the range of digits (‘0’ to ‘9’). If c is a digit,
the function returns 1; otherwise, it returns 0. It is useful for
validating numeric characters in input or string processing.*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
