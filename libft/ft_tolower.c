/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:44:04 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 15:35:14 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function converts an upper case letter to lower case. It takes an
integer c as input and checks if it corresponds to an upper case letter
(between ‘A’ and ‘Z’). If so, it adds 32 to the ASCII value to convert it to
lowercase. Finally, it returns the converted character or the original if it
was not uppercase. Useful for normalising text to lower case.*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
