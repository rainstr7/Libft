/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 20:44:31 by ihahn             #+#    #+#             */
/*   Updated: 2019/03/04 11:21:27 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_nbrlen(int n)
{
	int		num;
	int		i;

	i = 0;
	num = n;
	if (num == 0)
		return (1);
	while (num)
	{
		num /= 10;
		i++;
	}
	return ((n < 0) ? i + 1 : i);
}

char		*ft_itoa(int n)
{
	int		num;
	int		len;
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * (ft_nbrlen(n) + 1));
	if (!tmp)
		return (NULL);
	len = ft_nbrlen(n);
	tmp = ft_strnew(len);
	num = n;
	while (len--)
	{
		tmp[len] = (n < 0) ? (n % 10) * -1 + '0' : (n % 10) + '0';
		n /= 10;
	}
	if (num < 0)
		tmp[0] = '-';
	return (tmp);
}
