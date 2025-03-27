/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:29:31 by ekuchel           #+#    #+#             */
/*   Updated: 2023/05/18 20:11:31 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <sys/wait.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"
// # include "ft_printf/ft_printf.h"

# define STDIN 0
# define STDOUT 1
# define STDERR 2

# define STDIN_FILENO 0
# define STDOUT_FILENO 1

void	free_array(char **array);
char	*mygetenv(char *cmd, char *envp[]);
int		ft_openfile(char *fname, int fdmode);
char	*getcmd(char *cmd, char **envp);
void	ft_error(int type, char *function);
void	ft_childprocess(char *infile, int *pip_fd);
void	ft_parentprocess(char *outfile, int *pip_fd);
void	ft_execute(char *cmd, char **envp);
char	**ft_free_splitarray(int j, char **des);
char	**ft_split_pipex(char *s);
void	ft_fork_this(char **argv, char **envp);
void	ft_free_all(char **splitcmd, char *cmd);

#endif
