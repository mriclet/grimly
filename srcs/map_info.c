/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 16:15:11 by jblanche          #+#    #+#             */
/*   Updated: 2013/10/01 20:22:46 by jblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"
int		store_param(t_info *info, int i);

void	map_info(t_info *info)
{
	int		i;
	int		j;
	char	*nb_cols;
	char	*nb_lines;
	int		length_line;
	int		length_cols;

	i = 0;
	j = 0;
	while (info->param_line[i] != '\n')
		i++;
	i--;
	i = store_param(info, i);
	while (info->param_line[i--] != 'x')
		length_cols++;
	nb_cols = (char*)malloc(sizeof (*nb_cols) * length_cols);
	while (i < length_cols)
	{
		nb_cols[j] = info->param_line[i];
		j++;
		i++;
	}
	free(nb_cols);

	length_line = 0;
	while (info->param_line[length_line] != 'x')
		length_line++;
	nb_lines = (char *)malloc(sizeof (*nb_lines) * length_line);
	i = 0;
	while (info->param_line[i] != 'x')
	{
		nb_lines[i] = info->param_line[i];
		i++;
	}
	info->nb_cols = ft_char_to_int(nb_cols);
	info->nb_lines = ft_char_to_int(nb_lines);
	free(nb_lines);
}

int		store_param(t_info *info, int i)
{
	info->param = malloc(sizeof (char) * 4);
	info->param[4] = info->param_line[i--];
	info->param[3] = info->param_line[i--];
	info->param[2] = info->param_line[i--];
	info->param[1] = info->param_line[i--];
	info->param[0] = info->param_line[i--];
	return (i);
}
