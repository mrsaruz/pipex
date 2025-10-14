/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:32:32 by adruz-to          #+#    #+#             */
/*   Updated: 2025/07/16 14:54:30 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/* Error estándar */

void	ft_error(void)
{
	perror("Error");
	exit(EXIT_FAILURE);
}

/* Error si no encuentra las variables de entorno */

int	ft_enverror(void)
{
	ft_putstr_fd("Error: Environment variables not found\n", 2);
	return (0);
}

/* Error si el número de argumentos es incorrecto */

void	ft_argverror(void)
{
	ft_putstr_fd("Error: Incorrect number of arguments\n", 2);
	ft_error();
}

/* Error si falta la variable PATH y termina el programa */

int	ft_patherror(void)
{
	ft_putstr_fd("Error: Path missing\n", 2);
	exit(EXIT_FAILURE);
	return (0);
}

void	handle_exec_error(char *path, char **cmd)
{
	perror("Error: Execution error");
	ft_free(cmd);
	free(path);
	if (errno == EACCES)
		exit(126);
	exit(127);
}