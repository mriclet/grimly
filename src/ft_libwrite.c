/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libwrite.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 14:56:39 by mriclet           #+#    #+#             */
/*   Updated: 2013/09/30 15:18:02 by mriclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

#include	"grimly.h"

void		ft_putstr(char *str)
{
	int		i;
	int		ret;

	i = 0;
	while (str[i])
		++i;
	ret = write(1, str, i);
	if (ret == NOK)
		write(2, "Erreur: ft_putstr return(-1);\n", 30);
}

void		ft_putchar(char c)
{
	int		ret;

	ret = write(1, &c, 1);
	if (ret == NOK)
		write(2, "Erreur: ft_putchar return(-1);\n", 31);
}
