/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 15:43:26 by ihahn             #+#    #+#             */
/*   Updated: 2019/02/17 19:04:36 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) *(len + 1));
	if (!str)
		return (NULL);
	
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
