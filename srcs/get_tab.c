/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 16:24:22 by mriclet           #+#    #+#             */
/*   Updated: 2013/09/30 17:10:16 by mriclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		<stdlib.h>

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
	ft_putstr("ft_gettab() Malloc ok\n");
	ft_putstr("ft_gettab() STR = ");
	ft_putstr(info->str);
	ft_putchar('\n');
	while (info->str[i])
	{
		ft_putstr("ft_gettab() char is : ");
		ft_putchar(info->str[i]);
		ft_putchar('\n');
		if (info->str[i] == '\n')
		{
			++i;
			++j;
			info->map[j] = ft_malloc(info->nb_cols * sizeof(char));
			info->map[j][k] = 0;
			k = 0;
			ft_putstr(info->map[j - 1]);
		}
		info->map[j][k] = info->str[i];
		++i;
	}
	return (info);
}
