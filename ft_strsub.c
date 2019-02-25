/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 20:32:23 by ihahn             #+#    #+#             */
/*   Updated: 2019/02/24 19:01:13 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	size;
	char			*new;
	char			*new_start;

	if (!s || start > (size = ft_strlen(s)) || start + len > size + 1)
		return (NULL);
	new = (char *)ft_memalloc(len * sizeof(char) + 1);
	if (!new)
		return (NULL);
	size = 0;
	new_start = new;
	while (*s)
	{
		if (size >= start && size < start + len)
		{
			*new = *s;
			new++;
		}
		s++;
		size++;
	}
	*new = '\0';
	return (new_start);
}

