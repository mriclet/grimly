/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 14:34:26 by mriclet           #+#    #+#             */
/*   Updated: 2013/09/30 16:10:20 by mriclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		__STRUCT_H__
# define	__STRUCT_H__

typedef struct	s_info
{
	char 		param[5];
	int			nb_lines;
	int			nb_cols;
	char		*str;
	char		**map;
	char		*file;
}t_info;

#endif
