/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:13:04 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 12:00:45 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function writes a specific character to a specific file descriptor (fd).
This allows the output to be redirected to different destinations, such as 
files or custom streams, instead of being limited to standard output. It is 
useful for creating more flexible and customised output functions.*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
