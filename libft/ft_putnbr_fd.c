/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:16:41 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 12:07:07 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function prints an integer to a file, handling special cases such as
the minimum value -2147483648. For negative numbers, it prints a minus sign
and converts it to positive. It recursively decomposes numbers of more than
one digit and, for a single digit, prints it as a character.*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}
