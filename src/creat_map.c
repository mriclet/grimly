/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 14:33:47 by mriclet           #+#    #+#             */
/*   Updated: 2013/09/30 15:37:48 by mriclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		<stdlib.h>

#include		"struct.h"
#include		"grimly.h"

char			**ft_getmap(char *map1D)
{
	char 		**map2D;

	map1D = map1D;
	*map2D = ft_malloc(sizeof (char));
	return (map2D);
}

t_info			*ft_getinfos(char *map1D)
{
	t_info		*info;

	info = malloc(sizeof (t_info));
	if (info == NULL)
		ft_putstr("Erreur: ft_getinfos return (-1);\n");
	info->map = ft_getmap(map1D);
	map1D = map1D;
	return (info);
}
