/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekuchel <ekuchel@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 19:17:16 by ekuchel           #+#    #+#             */
/*   Updated: 2023/05/18 19:57:54 by ekuchel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/pipex.h"

char	*mygetenv(char *cmd, char *envp[])
{
	char	*prepath;
	int		i;

	i = 0;
	while (envp[i])
	{
		if (ft_strncmp(envp[i], "PATH=", 5) == 0)
		{
			prepath = ft_substr(envp[i], 5, ft_strlen(envp[i]) - 5);
			if (!prepath)
				return (cmd);
			return (prepath);
		}
		i++;
	}
	return (cmd);
}

char	*getcmd(char *cmd, char **envp)
{
	char	*prepath;
	char	**paths;
	char	*cmdpath;
	char	*check;
	int		j;

	prepath = mygetenv(cmd, envp);
	paths = ft_split(prepath, ':');
	free(prepath);
	j = 0;
	while (paths[j])
	{
		cmdpath = ft_strjoin(paths[j], "/");
		check = ft_strjoin(cmdpath, cmd);
		free(cmdpath);
		if (access(check, F_OK) == 0)
		{
			free_array(paths);
			return (check);
		}
		free(check);
		j++;
	}
	free_array(paths);
	return (cmd);
}

char	**ft_free_splitarray(int j, char **des)
{
	while (j > 0)
	{
		free(des[j - 1]);
		j--;
	}
	free(des);
	return (0);
}
