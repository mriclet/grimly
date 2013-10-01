/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 14:17:46 by mriclet           #+#    #+#             */
/*   Updated: 2013/10/01 13:55:22 by jblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

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
		while (buf[i] != '\n');
			i++;
		while (j < i)
		{
			info->str[j] = buf[j];
			j++;
		}
	}
	else
	{
		ft_putstr("ARG Error\n");
		return (NOK);
	}
	info = map_info(info);
	ft_putstr(info->param);
	ft_putchar('\n');
/*	ft_putstr("Info->str ok\n");
	info = ft_gettab(info);
	ft_putstr("Gettab ok\n");*/
	return (OK);
}
