/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:56:37 by adruz-to          #+#    #+#             */
/*   Updated: 2025/07/09 12:45:06 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H
# define CMD_NOT_FOUND 127
# define PERMISSION_DENIED 126
# define GENERIC_ERROR 1

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
# include <sys/types.h>
# include <sys/wait.h>
# include <stdio.h>
# include <errno.h>

/* Error handling funtions */
void	ft_error(void);
void	ft_argverror(void);
void	handle_exec_error(char *path, char **cmd);
int		ft_enverror(void);
int		ft_patherror(void);

/* Utility funtions */
void	ft_free(char **p_comand);
void	ft_execute(char *av, char **envp);
int		ft_path_position(char **envp);
char	*ft_find_path(char *commands, char **envp);

/* Pipex core funtions */
void	child_one(char **argv, char **envp, int *pipefd);
void	child_two(char **argv, char **envp, int *pipefd);
void	parent(int *fd, pid_t pid1, pid_t pid2);
int		main(int ac, char **av, char **envp);

#endif