/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 16:24:22 by mriclet           #+#    #+#             */
/*   Updated: 2013/09/30 16:38:38 by mriclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_info			*ft_gettab(t_info *info)
{
	int			i;
	int			j;
	int			k;

	i = 0;
	j = 0;
	k = 0;
	info->map = malloc(info->nb_lines * sizeof(char));
	info->map[j] = malloc(info->nb_cols * sizeof(char));
	while (info->str[i])
	{
		if (info->str[i] == '\n')
		{
			++i;
			++j;
			info->map[j] = malloc(info->nb_cols * sizeof(char));
			info->map[j][k] = 0;
			k = 0;
			ft_putstr(info->map[j - 1]);
		}
		info->map[j][k] = info->str[i];
		++i;
	}
	return (info);
}
