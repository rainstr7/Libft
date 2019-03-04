/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 20:44:03 by ihahn             #+#    #+#             */
/*   Updated: 2019/03/04 17:18:07 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char		*ft_print_word(int start, char const *str, char c)
{
	int		j;
	char	*temp;
	int		len;
	int		i;

	len = 0;
	j = start;
	while (str[j] != c && str[j])
	{
		j++;
		len++;
	}
	temp = (char*)malloc(sizeof(char) * (len + 1));
	if (!temp)
		return (NULL);
	i = 0;
	while (start < j)
		temp[i++] = str[start++];
	temp[i] = '\0';
	return (temp);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;

	if (!(s && c))
		return (NULL);
	arr = (char **)malloc(sizeof(char*) * (ft_strlenn(s, c) + 1));
	if (!arr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			arr[j++] = ft_print_word((i), s, c);
		else if (s[i] != c)
		{
			if (s[i - 1] == c)
				arr[j++] = ft_print_word((i), s, c);
		}
		i++;
	}
	arr[j] = NULL;
	return (arr);
}
