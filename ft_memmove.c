/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 20:21:44 by ihahn             #+#    #+#             */
/*   Updated: 2019/02/17 20:00:06 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	str = ft_memalloc(len);
	if (!str)
		return (NULL);
	ft_memcpy(str, src, len);
	while (i < len)
	{
		((char *)dst)[i] = str[i];
		i++;
	}
	free(str);
	return (dst);
}
