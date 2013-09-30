/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/30 17:01:06 by jblanche          #+#    #+#             */
/*   Updated: 2013/09/30 19:00:03 by jblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_to_int(char *str)
{
	int result;
	int sign;
	int i;
	
	result = 0;
	sign = 1;
	i = 0;
	if (str[0] == '-')
	{
		sign = - 1;  
		i++;
	}
	while (str[i] || str[i] != ',')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (sign * result);
}
