/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:44:51 by adruz-to          #+#    #+#             */
/*   Updated: 2024/10/24 12:03:17 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function prints a character string to a file descriptor, followed by
a newline character. It takes as parameters a pointer to the string and the
file descriptor to be written to. It uses ft_putstr_fd to print the string and
ft_putchar_fd to add the line break, improving the readability of the text.*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
