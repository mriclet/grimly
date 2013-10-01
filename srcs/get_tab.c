/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 16:24:22 by mriclet           #+#    #+#             */
/*   Updated: 2013/10/01 19:14:25 by mriclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		<stdlib.h>
#include		<fcntl.h>
#include		<sys/types.h>
#include		<sys/uio.h>
#include		<unistd.h>

#include		"grimly.h"

t_info			*ft_gettab(t_info *info)
{
	int			i;
	int			j;
	int			k;

	i = 0;
	j = 0;
	k = 0;
	info->map = malloc(info->nb_lines * sizeof(char));
	info->map[j] = ft_malloc(info->nb_cols * sizeof(char));
	while (info->str[i])
	{
		if (info->str[i] == '\n')
		{
			info->map[j][k] = 0;
			++i;
			++j;
			k = 0;
			info->map[j] = ft_malloc(info->nb_cols * sizeof(char));
		}
		info->map[j][k] = info->str[i];
		++k;
		++i;
	}
	info->map[j][k] = 0;
	return (info);
}
