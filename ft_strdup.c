/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 15:43:26 by ihahn             #+#    #+#             */
/*   Updated: 2018/12/21 15:48:35 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(const char *s)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	while (s[len] != '\0')
		len++;
	str = (char*)malloc(len + 1);
	i = len;
	len = 0;
	while (len < i)
	{
		str[len] = s[len];
		len++;
	}
	str[len] = '\0';
	return (str);
}
