/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:32:19 by adruz-to          #+#    #+#             */
/*   Updated: 2025/07/16 17:30:29 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/* Función para el hijo 1. Se encarga de abrir el archivo de entrada y ejecuta
   el primer comando
	infile --> comando 1 --> pipe 

 child_one:
	- Abre el archivo de entrada (argv[1]).
	- Redirige la entrada estándar al archivo de entrada.
	- Redirige la salida estándar al extremo de escritura del pipe.
	- Cierra los descriptores innecesarios.
	- Ejecuta el primer comando (argv[2]).
*/

void	child_one(char **argv, char **envp, int *pipefd)
{
	int	infile;

	infile = open(argv[1], O_RDONLY);
	if (infile < 0)
		ft_error(); // maneja error al abrir infile
	dup2(infile, STDIN_FILENO); // Redirige stdin a infile
	dup2(pipefd[1], STDOUT_FILENO); // Redirige stdout al pipe (sescritura)
	close(infile);
	close(pipefd[0]); // Cierra
	close(pipefd[1]);
	ft_execute(argv[2], envp); // Ejecuta el comando
}

/* Función para el hijo 2. Se encarga de leer del extremo de lectura del pipe,
que contiene la salida del primer comando, redirigirá su salida estándar al
archivo de salida u ejecutará el segundo comando. La salida final se guarda
en el archivo de salida
	pipe --> comando 2 --> outfile 
	[pipefd[0]] --> [argv[3](comando 2)] --> [outfile] 

 child_two:
	- Abre el archivo de salida (argv[4]).
	- Redirige la entrada estándar al extremo de lectura del pipe.
	- Redirige la salida estándar al archivo de salida.
	- Cierra los descriptores innecesarios.
	- Ejecuta el segundo comando (argv[3]).
*/

void	child_two(char **argv, char **envp, int *pipefd)
{
	int	outfile;

	outfile = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (outfile < 0)
		ft_error();
	dup2(pipefd[0], STDIN_FILENO); // Redirige stdin al pipe (lectura)
	dup2(outfile, STDOUT_FILENO); // Redirige stdout a outfile
	close(outfile);
	close(pipefd[0]);
	close(pipefd[1]);
	ft_execute(argv[3], envp);
}

/* Función para el padre. No ejecuta comandos. Se encarga de cerrar los
descriptores de archivo que no necesita, para evitar fugas de recursos, esperar
a que los hijos terminen (wait/waitpid) y manejar errores globales 

parent:
	- Cierra ambos extremos del pipe.
	- Espera a que ambos hijos terminen.
*/

/*
void	parent(int *fd, pid_t pid1, pid_t pid2)
{
	int	status;

	close(fd[0]);
	close(fd[1]);
	waitpid(pid1, NULL, 0); // Espera al primer hijo, pero no captura su código de salida
	waitpid(pid2, &status, 0); // Captura el código de salida del segundo hijo
	if (WIFEXITED(status)) //Verifica si el segundo hijo terminó correctamente
		exit(WEXITSTATUS(status)); // Devuelve el código de salida del segundo hijo
	exit(1); // Si algo falla y no se captura, devuelve un error genérico
} */

void	parent(int *fd, pid_t pid1, pid_t pid2)
{
	int	status;

	close(fd[0]);
	close(fd[1]);
	waitpid(pid1, NULL, 0); // Captura el código de salida del primer hijo
	if (WIFEXITED(status) && WEXITSTATUS(status) != 0) // Si el 1º hijo falla
		exit(WEXITSTATUS(status)); // Propaga el código de salida del primer hijo
	waitpid(pid2, &status, 0); // Captura el código de salida del segundo hijo
	if (WIFEXITED(status)) // Verifica si el segundo hijo terminó correctamente
		exit(WEXITSTATUS(status)); // Propaga el código de salida del segundo hijo
	exit(1); // Si algo falla y no se captura, devuleve un error genérico
}

/* main 
	- Comprueba el número de argumentos.
	- Crea el pipe para la comunicación entre procesos.
	- Crea dos procesos hijos para ejecutar los comandos.
	- El proceso padre cierra los extremos del pipe y espera a que ambos hijos 
		terminen.

*/

int	main(int ac, char **av, char **envp)
{
	int		fd[2]; // Array para los descriptores de pipe
	pid_t	pid1; // ID del primer proceso hijo
	pid_t	pid2; // ID del segundo proceso hijo

	if (ac != 5)
		ft_argverror();
	if (pipe(fd) == -1) // Crea el pipe para la comunicación entre procesos
		ft_error();
	pid1 = fork(); // Crea el primer proceso hijo
	if (pid1 == -1)
		ft_error();
	if (pid1 == 0)
		child_one(av, envp, fd); // Ejecuta el primer comando en el hijo 1
	pid2 = fork(); // Crea el segundo proceso hijo
	if (pid2 == -1)
		ft_error();
	if (pid2 == 0)
		child_two(av, envp, fd); // Ejecuta el segundo comando en el hijo 2
	parent(fd, pid1, pid2); // El proceso padre cierra los extremos del pipe y espera a los hijos
	return (0);
}
