/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 21:02:06 by ihahn             #+#    #+#             */
/*   Updated: 2019/02/17 19:08:03 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*flag;
	int				i;

	i = 0;

	while (n--)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			flag = &((unsigned char *)s)[i];
			return (flag);
		}
		i++;
	}
		return (0);
}
