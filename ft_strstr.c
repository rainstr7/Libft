/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 16:48:55 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/21 18:39:03 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *haystack, const char *needle)
{
	int			i;
	int			len1;
	int			len2;
	const char	*str1;
	const char	*str2;

	i = 0;
	str1 = (const char *)haystack;
	str2 = (const char *)needle;
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	if (needle == NULL)
		return ((char *)haystack);
	while (len1)
	{
		if (ft_memcmp(&str1[i], str2, len2) == 0)
			return (&((char *)str1)[i]);
		i++;
	}
	return (NULL);
}
