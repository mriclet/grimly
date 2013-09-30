/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 14:17:46 by mriclet           #+#    #+#             */
/*   Updated: 2013/09/30 16:59:53 by mriclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"grimly.h"

/*                  Main TEST                */
int			main(int ac, char **av)
{
	t_info	*info;

	info = malloc(1 * sizeof (t_info));
	ft_putstr("Malloc ok\n");
	if (ac > 1)
		info->str = av[1];
	ft_putstr("Info->str ok\n");
	info = ft_gettab(info);
	ft_putstr("Gettab ok\n");
	return (OK);
}
