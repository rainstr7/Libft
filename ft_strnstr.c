/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 17:33:44 by ihahn             #+#    #+#             */
/*   Updated: 2019/03/11 16:31:03 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	char	*begin;
	int		len_str;

	if (*needle == '\0')
		return ((char *)haystack);
	begin = (char *)needle;
	len_str = 0;
	while (*haystack && (len_str < (int)len))
	{
		i = 0;
		while (*haystack == *needle && (len_str < (int)len))
		{
			if (*(needle + 1) == '\0')
				return ((char *)(haystack - i));
			needle++;
			len_str++;
			i++;
			haystack++;
		}
		haystack = haystack - i + 1;
		needle = begin;
		len_str = len_str - i + 1;
	}
	return (NULL);
}
