/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/01 19:31:43 by mriclet           #+#    #+#             */
/*   Updated: 2013/10/01 20:02:21 by mriclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<sys/types.h>
#include	<sys/uio.h>
#include	<unistd.h>

#include	"grimly.h"

char		*ft_addstr(char *str, char *add)
{
	char	*ret;
	int		i;
	int		j;

	i = -1;
	j = -1;
	ret = ft_malloc(ft_strlen(str) + ft_strlen(add));
	while (str[++i])
		ret[i] = str[i];
	while (add[++j])
		ret[i + j] = str[j];
	return (ret);
}

char		*ft_readin()
{
	char	buff[BUFF_SIZE];
	char	*str;
	int		noct;

	noct = BUFF_SIZE;
	str = "";
	while (1)
	{
		noct = read(0, buff, BUFF_SIZE);
		buff[noct] = 0;
		str = ft_addstr(str, buff);
	}
	return (str);
}
