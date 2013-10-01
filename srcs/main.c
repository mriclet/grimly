/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 14:17:46 by mriclet           #+#    #+#             */
/*   Updated: 2013/10/01 16:51:18 by jblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

void	ft_putnbr(int n);

/*                  Main TEST                */
int			main(int ac, char **av)
{
	t_info	*info;
	char	*buf;
	int		fd;
	int		j;
	int		i;
	
	i = 0;
	j = 0;	
	info = malloc(1 * sizeof (t_info));
	buf = (char*)malloc(18 * sizeof(*buf));
	ft_putstr("Malloc ok\n");
	if (ac > 1)
	{
		fd = open(av[1], O_RDWR);
		read(fd, buf, 18);
		while (buf[i] != '\n')
			i++;
		printf("i = %d\n", i);
		ft_putchar(buf[12]);
		printf("buf =>%s\n", buf);
		info->str = malloc(sizeof(char) * (i + 1));
		while (j <= i)
		{
			info->str[j] = buf[j];
			j++;
		}
		info->str[i + 1] = '\0';
	}
	else
	{
		ft_putstr("ARG Error\n");
		return (NOK);
	}
	info = map_info(info);
/*	printf("params =>%s\n", info->param);
	printf("lines =>%d\n", info->nb_cols);
	printf("cols =>%d\n", info->nb_lines);
	printf("str =>%s\n", info->str);*/
/*	ft_putstr("Info->str ok\n");
	info = ft_gettab(info);
	ft_putstr("Gettab ok\n");*/
	return (OK);
}
