/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 20:21:44 by ihahn             #+#    #+#             */
/*   Updated: 2019/02/24 17:49:16 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*csrc;
	char	*cdst;

	cdst = (char *)dst;
	csrc = (char *)src;
	if (cdst == csrc || len == 0)
		return (dst);
	while (len > 0)
	{
		if (cdst < csrc)
		{
			*cdst = *csrc;
			cdst++;
			csrc++;
			len--;
		}
		else
		{
			cdst[len - 1] = csrc[len - 1];
			len--;
		}
	}
	return (dst);
}
