/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 17:33:44 by ihahn             #+#    #+#             */
/*   Updated: 2019/02/24 18:25:29 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	char	*little_start;
	int		steps;

	if (*little == '\0')
		return ((char *)big);
	little_start = (char *)little;
	steps = 0;
	while (*big && (steps < (int)len))
	{
		i = 0;
		while (*big == *little && (steps < (int)len))
		{
			if (*(little + 1) == '\0')
				return ((char *)(big - i));
			i++;
			big++;
			little++;
			steps++;
		}
		big = big - i + 1;
		little = little_start;
		steps = steps - i + 1;
	}
	return (NULL);
}
