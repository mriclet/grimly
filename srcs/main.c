/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 14:17:46 by mriclet           #+#    #+#             */
/*   Updated: 2013/09/30 16:40:52 by mriclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"struct.h"
#include	"grimly.h"

/*                  Main TEST                */
int			main(int ac, char **av)
{
	t_info	*info;

	info = malloc(1 * sizeof (t_info));
	info->str = av[1];
	info = ft_gettab(info);
	ac = ac;
	av = av;
	return (OK);
}
