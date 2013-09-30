/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 16:15:11 by jblanche          #+#    #+#             */
/*   Updated: 2013/09/30 17:36:25 by jblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include "grimly.h"

t_info		*map_info(char *str)
{
	t_info	*info;
	int		i;
	int		j;
	char	*nb_cols;
	char	*nb_lines;
	int		length_cols;
	int		length_lines;

	length_cols = 0;
	length_lines = 0;
	i = 0;
	while (str[i])
		i++;
	info->param[4] = str[i--];
	info->param[3] = str[i--];
	info->param[2] = str[i--];
	info->param[1] = str[i--];
	info->param[0] = str[i--];
	while (str[i] != 'x')
	{
		length_col++;
		i--;
	}
	nb_cols = (char *)malloc(sizeof (*nb_cols) * length_cols);
	j = i;
	while (j != length_col)
	{
		nb_cols[j] = str[j];
		j++;
	}
	while (i != 0)
	{
		length_lines++;
		i--;
	}
	nb_lines = (char *)malloc(sizeof (*nb_lines) * length_lines);
	while (str[i] != 'x')
	{
		nb_lines[i] = str[i];
		i++;
	}
	info->nb_cols = ft_char_to_int(nb_cols);
	info->nb_lines = ft_char_to_int(nb_lines);
	return (s_info);
}
