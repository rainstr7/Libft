/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 17:33:44 by ihahn             #+#    #+#             */
/*   Updated: 2019/02/17 15:20:45 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int		i;
	size_t	len2;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	len2 = ft_strlen(str2);
	if (!str2)
		return (str1);
	else
	{
		while (((i + len2) <= len) && (*str1))
		{
			if (ft_memcmp(str1, str2, len2) == 0)
				return (str1);
			str1++;
			i++;
		}
	}
	return (NULL);
}
