/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 16:15:11 by jblanche          #+#    #+#             */
/*   Updated: 2013/09/30 18:26:41 by jblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "grimly.h"

t_info		*map_info(t_info *info)
{
	int		i;
	int		j;
	char	*nb_cols;
	char	*nb_lines;
	int		length_cols;
	int		length_lines;
	
	length_cols = 0;
	length_lines = 0;
	i = 0;
	while (info->str[i] != '\n')
		i++;
	info->param[4] = info->str[i--];
	info->param[3] = info->str[i--];
	info->param[2] = info->str[i--];
	info->param[1] = info->str[i--];
	info->param[0] = info->str[i--];
	while (info->str[i] != 'x')
	{
		length_col++;
		i--;
	}
	nb_cols = (char *)malloc(sizeof (*nb_cols) * length_cols);
	j = i;
	while (j != length_col)
	{
		nb_cols[j] = info->str[j];
		j++;
	}
	while (i != 0)
	{
		length_lines++;
		i--;
	}
	nb_lines = (char *)malloc(sizeof (*nb_lines) * length_lines);
	while (info->str[i] != 'x')
	{
		nb_lines[i] = info->str[i];
		i++;
	}
	info->nb_cols = ft_char_to_int(nb_cols);
	info->nb_lines = ft_char_to_int(nb_lines);
	return (s_info);
}
