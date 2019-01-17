/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 18:10:00 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/17 18:18:01 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*str1;
	char	*str2;
	int		i;

	str1 = (char *)dst;
	str2 = (char *)src;
	i = 0;
	if (n == 0)
		return (dst);
	else
	{
		while (n--)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	return (dst);
}
