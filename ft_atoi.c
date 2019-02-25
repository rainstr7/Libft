/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 20:36:19 by ihahn             #+#    #+#             */
/*   Updated: 2019/02/25 21:02:02 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int n;
	int i;
	int sign;

	n = 0;
	i = 0;
	sign = 1;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
		(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{	
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
		(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r') || (str[i] >= 0 && str[i] <= 31))
			return (0);
	while (str[i]) 
		
		if ((str[i] >= '0') && (str[i] <= '9'))
			n = 10 * n + (str[i++] - '0');
		else 
			break;
	return (n * sign);
}
