/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grimly.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 14:21:19 by mriclet           #+#    #+#             */
/*   Updated: 2013/09/30 16:46:43 by mriclet          ###   ########.fr       */
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
t_info				*ft_gettab(t_info *info);

#endif		/* !__GRIMLY_H__ */
