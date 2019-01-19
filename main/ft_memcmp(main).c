/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp(main).c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 16:57:31 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/19 17:19:34 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  //Для printf
#include <string.h>   //Для memcmp

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	unsigned char *str1;
	unsigned char *str2;

	if (s1 == NULL || s2 == NULL)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;

	while (n--)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

int main (void)
{
   // Исходные массивы
   unsigned char src[15] = "12345678901";
   unsigned char dst[15] = "12345678902";

   // Сравниваем первые 10 байт массивов
   // и результат выводим на экран
   if (memcmp (src, dst, 11) == 0)
		puts ("Области памяти идентичные.");
   else
		puts ("Области памяти отличаются.");

	if (ft_memcmp (src, dst, 11) == 0)
    	puts ("Области памяти идентичные.");
   else
		puts ("Области памяти отличаются.");

   return 0;
}