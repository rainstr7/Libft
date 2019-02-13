/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 14:48:15 by ihahn             #+#    #+#             */
/*   Updated: 2019/02/09 21:45:07 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)b;
	if (c == 0)
		return (b);
	else
	{
		while (len--)
		{
			str[i] = (unsigned char)c;
			i++;
		}
	}
	return (b);
}
