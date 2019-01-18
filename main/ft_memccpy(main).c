/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy(main).c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 18:19:37 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/17 18:57:47 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*void 		*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
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
			if (str2[i] != (unsigned char) c)
			{
				str1[i] = str2[i];
				i++;
			}
			else
			{ 
				str1[i] = str2[i];
				return(dst);
			}
		}
	}
	return (dst);
}*/
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

int main(void)
{	
	unsigned char src[15] = "1234567890";
	unsigned char dst[15] = "";
	unsigned char src2[15] = "1234567890";
	unsigned char dst2[15] = "";
	memccpy (dst, src, '8', 9);
	printf ("dst: %s\n", dst);
	ft_memccpy (dst2, src2, '8', 9);
	printf ("dst: %s\n", dst2);
	return (0);
} 
