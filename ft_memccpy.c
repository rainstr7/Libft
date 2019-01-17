/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 18:42:28 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/17 18:58:35 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (dst);
	else
	{
		while (n--)
		{
			if (((char *)src)[i] != (unsigned char)c)
			{
				((char *)dst)[i] = ((char *)src)[i];
				i++;
			}
			else
			{
				((char *)dst)[i] = ((char *)src)[i];
				return (dst);
			}
		}
	}
	return (dst);
}
