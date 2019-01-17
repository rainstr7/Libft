/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy(main).c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 17:41:40 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/17 18:16:57 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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


int main(void)
{

unsigned char src[10] = "123456";
unsigned char dst[10] = "";
unsigned char src2[10] = "123456";
unsigned char dst2[10] = "";

memcpy (dst, src, 3);
printf ("dst: %s\n", dst);

ft_memcpy(dst2, src2, 3);
printf ("dst2: %s\n", dst2);

return (0);
} 
