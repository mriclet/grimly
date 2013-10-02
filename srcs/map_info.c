/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 16:15:11 by jblanche          #+#    #+#             */
/*   Updated: 2013/10/02 14:42:22 by mriclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

int		store_param(t_info *info, int i);
void	store_nb_cols(t_info *info);

void	map_info(t_info *info)
{
	int		i;
	char	*nb_lines;
	int		length_line;

	i = 0;
	while (info->param_line[i] != '\n')
		i++;
	i--;
	i = store_param(info, i);
	store_nb_cols(info);
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
	info->nb_lines = ft_char_to_int(nb_lines);
	free(nb_lines);
}

void	store_nb_cols(t_info *info)
{
	char	*nb_cols;
	int		length_cols;
	int		j;
	int		i;

	i = 0;
	length_cols = 0;
	while (info->param_line[i])
		i++;
	while (info->param_line[i] != 'x')
	{
		length_cols++;
		i--;
	}
	j = 0;
	i++;
	nb_cols = (char*)malloc(sizeof (*nb_cols) * (length_cols -= 7));
	while (j < length_cols)
		nb_cols[j++] = info->param_line[i++];
	info->nb_cols = ft_char_to_int(nb_cols);
	free(nb_cols);
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
