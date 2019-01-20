/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 20:21:44 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/20 21:58:30 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *destination, const void *source, size_t n)
{
	int				i;
	unsigned char	*strdes;
	unsigned char	*strsrc;

	i = n;
	strdes = (unsigned char*)destination;
	strsrc = (unsigned char*)source;
	if (strdes > strsrc)
	{
		while (i--)
		{
			strdes[i - 1] = strsrc[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(destination, source, n);
	return (destination);
}
