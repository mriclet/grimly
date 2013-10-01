/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 14:17:46 by mriclet           #+#    #+#             */
/*   Updated: 2013/10/01 13:07:24 by jblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"grimly.h"

/*                  Main TEST                */
int			main(int ac, char **av)
{
	t_info	*info;
	int		buf;

	info = malloc(1 * sizeof (t_info));
	ft_putstr("Malloc ok\n");
	if (ac > 1)
	{
		open(av[1], O_RDWR);
		read(av[1], buf, );
		info->str = av[1];
	}
	else
	{
		ft_putstr("ARG Error\n");
		return (NOK);
	}
	info = map_info(info);
	ft_putstr(info->param);
/*	ft_putstr("Info->str ok\n");
	info = ft_gettab(info);
	ft_putstr("Gettab ok\n");*/
	return (OK);
}
