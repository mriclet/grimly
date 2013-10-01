/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 16:15:11 by jblanche          #+#    #+#             */
/*   Updated: 2013/10/01 17:02:11 by jblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

t_info		*map_info(t_info *info)
{
	int		i;
	int		j;
	char	*nb_cols;
	char	*nb_lines;
	int		length_col;
	int		length_line;

	length_col = 0;
	length_line = 0;
	i = 0;
	while (info->str[i] != '\n')
		i++;
	i -= 1;
//	store_param(info, i);
	info->param = malloc(sizeof (char) * 4);
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
	nb_cols = (char *)malloc(sizeof (*nb_cols) * (length_col + 1));
	j = 0;
	while (j != length_col)
	{
		nb_cols[j] = info->str[++i];
		j++;
	}
	nb_cols[j] = '\0';
	while (info->str[length_line] != 'x')
		length_line++;
	nb_lines = (char *)malloc(sizeof (*nb_lines) * length_line);
	i = 0;
	while (info->str[i] != 'x')
	{
		nb_lines[i] = info->str[i];
		i++;
	}
	info->nb_cols = ft_char_to_int(nb_cols);
	info->nb_lines = ft_char_to_int(nb_lines);
	return (info);
}


