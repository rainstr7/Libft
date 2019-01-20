/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 17:33:44 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/20 22:05:47 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int				i;
	int				len2;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)haystack;
	str2 = (unsigned char *)needle;
	len2 = ft_strlen(str2);
	if (!str2)
		return (str1);
	else
	{
		while (((i + len2) <= len) && *str1)
		{
			if (ft_memcmp(str1, str2, len2) == 0)
				return (str1);
			str1++;
			i++;
		}
	}
	return (NULL);
}
