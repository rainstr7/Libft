/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 20:36:19 by ihahn             #+#    #+#             */
/*   Updated: 2019/03/04 13:02:46 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define FT_DEL(x) (x=='\n'||x=='\t'||x =='\v'||x == ' '||x=='\f'||x=='\r')

int		ft_atoi(const char *str)
{
	int n;
	int i;
	int sign;

	n = 0;
	i = 0;
	sign = 1;
	while (FT_DEL(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (FT_DEL(str[i]) || (str[i] >= 0 && str[i] < 32))
		return (0);
	while (str[i])
		if ((str[i] >= 48) && (str[i] <= 57))
			n = 10 * n + (str[i++] - 48);
		else
			break ;
	return (n * sign);
}
