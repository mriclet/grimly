/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grimly.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 14:21:19 by mriclet           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2013/09/30 16:46:43 by mriclet          ###   ########.fr       */
=======
/*   Updated: 2013/09/30 17:26:51 by jblanche         ###   ########.fr       */
>>>>>>> cbe052f0506b0c568959bc327328586c4ba95755
/*                                                                            */
/* ************************************************************************** */

#ifndef		__GRIMLY_H__
# define	__GRIMLY_H__

#include	<stdlib.h>
#include	"struct.h"

#define		OK	1
#define		NOK	-1

/*ft_libwrite*/
void				ft_putstr(char *str);
void				ft_putchar(char c);
/*ft_liballoc*/
char				*ft_malloc(size_t size);
/*creat_map*/
<<<<<<< HEAD
t_info				*ft_gettab(t_info *info);
=======
struct s_info		*ft_getinfos(char *map1D);
char				**ft_getmap(char *map1D);
/*map_info*/
int					ft_char_to_int(char *str);
>>>>>>> cbe052f0506b0c568959bc327328586c4ba95755

#endif		/* !__GRIMLY_H__ */
