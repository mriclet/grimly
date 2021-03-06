/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grimly.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 14:21:19 by mriclet           #+#    #+#             */
/*   Updated: 2013/10/02 14:54:28 by mriclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		__GRIMLY_H__
# define	__GRIMLY_H__

#include	<stdlib.h>
#include	"struct.h"

#define		PASS		1
#define		FAIL		-1
#define		BUFF_SIZE	512

void				ft_getway(t_info *info);
void				fill_struct(t_info *info, char *buf, char **av);
int					check_map(t_info *info);
/*ALL*/
void				ft_putstr(char *str);
void				ft_putchar(char c);
int					ft_strlen(char *str);
/*ft_liballoc*/
char				*ft_addstr(char *str, char *add);
t_info				*ft_readin();
char				*ft_malloc(size_t size);
/*creat_map*/
t_info				*ft_gettab(t_info *info);
char				**ft_getmap(char *map1D);
/*map_info*/
int					ft_char_to_int(char *str);

#endif		/* !__GRIMLY_H__ */
