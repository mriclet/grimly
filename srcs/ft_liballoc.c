/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_liballoc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 14:54:18 by mriclet           #+#    #+#             */
/*   Updated: 2013/09/30 15:31:57 by mriclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

#include	"grimly.h"

char		*ft_malloc(size_t size)
{
	char	*ret;

	ret = malloc(size);
	if (ret == NULL)
		ft_putstr("Erreur: ft_malloc return(-1);\n");
	return (ret);
}
