/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 20:32:23 by ihahn             #+#    #+#             */
/*   Updated: 2019/02/18 21:55:51 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s1, unsigned int start, size_t len)
{
	unsigned int	size;
	char			*str;

	if (!s1)
		return (NULL);
	if (!s1 || start > (size = ft_strlen(s1)) || start + len > size + 1)
		return (NULL);
	str = (char *)malloc(sizeof(str) * (len + 1));
	if (!str)
		return (NULL);
	if (str)
	{
		ft_memcpy(str, s1 + start, len);
		str[len] = '\0';
	}
	return (str);
}
