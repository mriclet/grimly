/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grimly.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 14:21:19 by mriclet           #+#    #+#             */
/*   Updated: 2013/09/30 17:26:51 by jblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		__GRIMLY_H__
# define	__GRIMLY_H__

#include	<stdlib.h>

#define		OK	1
#define		NOK	-1

/*ft_libwrite*/
void				ft_putstr(char *str);
void				ft_putchar(char c);
/*ft_liballoc*/
char				*ft_malloc(size_t size);
/*creat_map*/
struct s_info		*ft_getinfos(char *map1D);
char				**ft_getmap(char *map1D);
/*map_info*/
int					ft_char_to_int(char *str);

#endif		/* !__GRIMLY_H__ */
