/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 17:16:21 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/20 22:00:32 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len1;
	size_t	len2;
	size_t	len3;

	if (dst == NULL || src == NULL || size == 0)
		return (0);
	i = 0;
	len1 = 0;
	len2 = ft_strlen(dst);
	len3 = ft_strlen(src);
	while ((dst[len1]) && (len1 < size))
		len1++;
	if (!(len1 < size))
		return (size + len3);
	while (src[i] && i < (size - len2 - 1))
	{
		dst[len1 + i] = src[i];
		i++;
	}
	dst[len1 + i] = '\0';
	return (len1 + ft_strlen(src));
}
