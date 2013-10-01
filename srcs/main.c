/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 14:17:46 by mriclet           #+#    #+#             */
/*   Updated: 2013/10/01 19:06:09 by jblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#define TOT_SIZE ((info->nb_lines + 1) * info->nb_cols + (info->nb_lines + 1))
void		make_param_line(char *buf, t_info *info);
void		map_info(t_info *info);
void		make_map_1D(char *buf, t_info *info);

int			main(int ac, char **av)
{
	t_info	*info;
	char	*buf;

	ac = ac;
	info = malloc(1 * sizeof (t_info));
	info->file = av[1];
	make_param_line(buf, info);
	free(buf);
	map_info(info);
	make_map_1D(buf, info);
	free(buf);
	printf("params =>%s\n", info->param);
	printf("cols =>%d\n", info->nb_cols);
	printf("lines =>%d\n", info->nb_lines);
	printf("param_line =>%s", info->param_line);
	printf("str =\n%s", info->str);
	return (PASS);
}

void		make_param_line(char *buf, t_info *info)
{
	int		fd;
	int		j;
	int		i;

	i = 0;
	j = 0;
	buf = (char*)malloc(18 * sizeof (*buf));
	fd = open(info->file, O_RDWR);
	read(fd, buf, 18);
	while (buf[i] != '\n')
		i++;
	info->param_line = malloc(sizeof(char) * i);
	while (j <= i)
	{
		info->param_line[j] = buf[j];
		j++;
	}
	info->param_line[j] = '\0';
}

void		make_map_1D(char *buf, t_info *info)
{
	int		fd;
	int		i;
	int		j;

	i = 0;
	j = 0;
	buf = (char*)malloc(sizeof (*buf) * TOT_SIZE);
	fd = open(info->file, O_RDWR);
	read(fd, buf, TOT_SIZE);
	while (buf[i] != '\n')
		i++;
	i++;
	info->str = (char*)malloc(sizeof (*buf) * TOT_SIZE);
	while (buf[i])
	{
		info->str[j] = buf[i];
		j++;
		i++;
	}
	info->str[i] = '\0';
}
