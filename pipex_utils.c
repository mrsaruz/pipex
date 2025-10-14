/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:32:44 by adruz-to          #+#    #+#             */
/*   Updated: 2025/07/16 14:54:33 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/*Funciones que aseguran que el programa pueda manejar la memoria de manera
eficiente, localizar y ejecutar comandos correctamente, y gestionar errores de
manera adecuada. */

/* ft_ free Gestión de la memoria, asegura que la memoria asignada para los
comandos se libere adecuadamente, evitando fugas de momoria */

void	ft_free(char **p_comand)
{
	int	i;

	i = 0;
	while (p_comand[i])
		free(p_comand[i++]);
	free(p_comand);
}

/* ft_path_position Función para localizar la variable de entorno 'PATH', que
contiene las rutas donde el sistema busca los ejecutables. Sin esta información,
el programa no podría encontrar y ejecutar los comandos correctamente. */

int	ft_path_position(char **envp)
{
	int	i;

	i = 0;
	while (ft_strnstr(envp[i], "PATH=", 5) == 0)
	{
		i++;
		if (envp[i] == NULL)
			exit(ft_patherror());
	}
	return (i);
}

/* ft_find_path Función que busca la ruta completa de un comando dado, lo cual
es fundamental para ejecutar comandos en el contexto de Pipex. Permite al
programa construir la ruta del comando a partir de las rutas definidas en 'PATH'
asegurando que se pueda ejecutar el comando correcto. */

char	*ft_find_path(char *commands, char **envp)
{
	char	**paths;
	char	*cmd_path;
	char	*tmp;
	int		i;

	i = ft_path_position(envp);
	paths = ft_split(envp[i] + 5, ':');
	i = 0;
	while (paths[i])
	{
		tmp = ft_strjoin(paths[i], "/");
		cmd_path = ft_strjoin(tmp, commands);
		free(tmp);
		if (access(cmd_path, F_OK) == 0)
		{
			ft_free(paths);
			return (cmd_path);
		}
		free (cmd_path);
		i++;
	}
	ft_free(paths);
	return (0);
}

/* ft_execute Función que es el núcleo de la ejecución de comandos. Se encarga
de validar el comando, separar los argumentos, encontrar la ruta del comando y
finalmente ejecutarlo. Sin esta función, el programa no podría llevar a cabo la
ejecución de comandos, que es una parte central del proyecto Pipex. */

// Debe:
//  Separar el comando y sus argumentos (usando ft_split)
//  Busca la ruta del ejecutable (usando path del entorno)
//  Llama a execve para ejecutar el comando
//  Manejar errores si el comando no se encuentra o falla

void	ft_execute(char *av, char **envp)
{
	char	**cmd;
	char	*path;

	if (!av || *av == '\0')
	{
		ft_putstr_fd("Error: Empty command\n", 2);
		exit(127);
	}
	cmd = ft_split(av, ' ');
	if (!cmd || !cmd[0])
	{
		ft_putstr_fd("Error: Invalid command\n", 2);
		ft_free(cmd);
		exit(127);
	}
	path = ft_find_path(cmd[0], envp);
	if (!path)
	{
		ft_putstr_fd("Error: Command not found\n", 2);
		ft_free(cmd);
		exit(127);
	}
	execve(path, cmd, envp);
	handle_exec_error(path, cmd);
}

