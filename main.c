/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 18:42:28 by ihahn             #+#    #+#             */
/*   Updated: 2019/02/27 21:16:40 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	unsigned char	c1;
	
	c1 = (unsigned char)c;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while (n--)
	{
		if ((*dst1++ = *src1++) == c1)
			return (dst1);
	}
	return (0);
}*/

int main(void)
{	
	unsigned char src[] = "test basic du memccpy !";
	char	buff[22];
	memset(buff, 0, sizeof(buff));
	
	char	*r1 = memccpy(buff, src, 'm', 22);
	char	*r2 = ft_memccpy(buff, src, 'm', 22);
	
	printf ("dst1: %c\n", *r1);
	printf ("dst2: %c\n", *r2);

	//memccpy ("", src1, 'm', 0);
	//ft_memccpy ("", src2, 'm', 0);	
	
	return (0);
} 