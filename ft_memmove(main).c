/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove(main).c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 19:00:57 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/17 20:20:51 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

void *ft_memmove (void *destination, const void *source, size_t n)
{
	int i;

	i = n;
	if ((unsigned char*)destination > ((unsigned char*)source))
	{
		while (n--)
		{
			((unsigned char*)destination)[i - 1] = ((unsigned char*)source)[i - 1];
			i--;
		}
	}
	else 
		ft_memcpy(destination, source, n);
	return (destination);
}


int main(void)
{
	unsigned char src[11] = "1234567890";
	unsigned char src7[11] = "1234567890";

	char dest2[] = "oldstring";
	const char src2[]  = "newstring";

	char dest3[] = "oldstring";
	const char src3[]  = "newstring";
 
	printf ("src old: %s original\n", src);
	memmove (&src[4], &src[3], 3);
	printf ("src new: %s original\n\n", src);

	printf ("src7 old: %s my func\n", src7);
	ft_memmove (&src7[4], &src7[3], 3);
	printf ("src7 new: %s my func\n\n", src7);

	printf("Before memmove dest2 = %s, src2 = %s original\n", dest2, src2);
  	memmove(dest2, src2, 9);
   	printf("After memmove dest2 = %s, src2 = %s original\n\n", dest2, src2);

	printf("Before memmove dest3 = %s, src3 = %s my func\n", dest3, src3);
  	ft_memmove(dest3, src3, 9);
   	printf("After memmove dest3 = %s, src3 = %s my func\n\n", dest3, src3);
}