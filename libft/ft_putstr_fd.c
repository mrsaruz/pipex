/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:33:48 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 12:16:41 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function writes a string (s) to a file descriptor (fd) using write.
It gets the length of the string with ft_strlen. It does not check if the
string is NULL nor does it handle errors. In short, it sends text to different
outputs.*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
