/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 14:17:46 by mriclet           #+#    #+#             */
/*   Updated: 2013/10/01 18:04:08 by jblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
int		make_param_line(int ac, char *buf, t_info *info);

int		main(int ac, char **av)
{
	t_info	*info;
	char	*buf;

	info = malloc(1 * sizeof (t_info));
	info->file = av[1];
	make_param_line(ac, buf, info);
	info = map_info(info);
	printf("params =>%s\n", info->param);
	printf("cols =>%d\n", info->nb_cols);
	printf("lines =>%d\n", info->nb_lines);
	printf("str =>%s", info->param_line);
	return (PASS);
}

int		make_param_line(int ac, char *buf, t_info *info)
{
	int		fd;
	int		j;
	int		i;

	i = 0;
	j = 0;
	buf = (char*)malloc(18 * sizeof (*buf));
	if (ac > 1)
	{
		fd = open(info->file, O_RDWR);
		read(fd, buf, 18);
		while (buf[++i] != '\n')
			info->param_line = malloc(sizeof(char) * (i + 1));
		while (j <= i)
		{
			info->param_line[j] = buf[j];
			j++;
		}
		info->param_line[i + 1] = '\0';
	}
	else
		return (FAIL);
	return (PASS);
}
