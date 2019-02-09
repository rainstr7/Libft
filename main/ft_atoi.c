/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 20:36:19 by ihahn             #+#    #+#             */
/*   Updated: 2019/02/09 17:23:12 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str)
{
	int n;
	int i;
	int flag;

	n = 0;
	i = 0;
	flag = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
		(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		flag = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		n = 10 * n + (str[i] - '0');
		i++;
	}
	if (flag == 1)
		return (-n);
	return (n);
}
int	main(void)
{
const char str[1024] = "1024";

printf ("atoi: %d\n", ft_atoi(str));
return (0);
}