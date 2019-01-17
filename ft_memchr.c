/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 21:02:06 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/17 21:08:15 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*flag;
	int				i;

	i = 0;
	if (s == NULL)
		return (NULL);
	else
	{
		while (n--)
		{
			if (((unsigned char *)s)[i] == (unsigned char)c)
			{
				flag = &((unsigned char *)s)[i];
				return (flag);
			}
			i++;
		}
		return (NULL);
	}
}
