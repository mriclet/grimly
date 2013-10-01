/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grimly.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 14:21:19 by mriclet           #+#    #+#             */
/*   Updated: 2013/10/01 18:09:57 by jblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		__GRIMLY_H__
# define	__GRIMLY_H__

#include	<stdlib.h>
#include	"struct.h"

#define		PASS	1
#define		FAIL	-1

/*ALL*/
void				ft_putstr(char *str);
void				ft_putchar(char c);
/*ft_liballoc*/
char				*ft_malloc(size_t size);
/*creat_map*/
t_info				*ft_gettab(t_info *info);
char				**ft_getmap(char *map1D);
/*map_info*/
int					ft_char_to_int(char *str);

#endif		/* !__GRIMLY_H__ */
