/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 16:50:10 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/20 22:04:06 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int		len;
	int		i;
	char	*str;

	len = 0;
	i = 0;
	len = strlen(s1);
	if ((s1 == NULL) || (s2 == NULL))
		return (0);
	while ((s2[i] != '\0') && (i <= n))
	{
		s1[len] = s2[i];
		len++;
		i++;
	}
	s1[len] = '\0';
	return (s1);
}
