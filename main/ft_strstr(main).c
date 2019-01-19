/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr(main).c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 18:28:46 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/19 17:48:21 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  
#include <string.h>

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

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


char *ft_strstr(const char *haystack, const char *needle)
{
   int i;
   int len1;
   int len2;
	const char *str1;
   const char *str2;

	i = 0;
	str1 = (const char *)haystack;
   str2 = (const char *)needle;
   len1 = ft_strlen(str1);
   len2 = ft_strlen(str2);
	if (needle == NULL)
		return ((char *)haystack);
	while (len1)
		{
			if (ft_memcmp(&str1[i], str2, len2) == 0)
			   return (&((char *) str1)[i]);
      i++;
		}
			return (NULL);
}

int main (void)
{    
   char str1 [11] = "0123456789"; // Массив со строкой для поиска
   char str2 [10] = "345"; // Набор символов, которые должны входить в искомый сегмент
   char *istr1; // Переменная, в которую будет занесен адрес первой найденной строки

   char str3 [11] = "0123456789";
   char str4 [10]= "345";
   char *istr2;

   istr1 = strstr (str1,str2); //Поиск строки

   if ( istr1 == NULL)
      printf ("Строка не найдена\n"); //Вывод результата поиска на консоль
   else
      printf ("Искомая строка начинается с символа %ld\n",istr1 - str1 + 1);


   istr2 = ft_strstr (str3,str4); //Поиск строки

   if ( istr2 == NULL)
      printf ("Строка не найдена\n"); //Вывод результата поиска на консоль
   else
      printf ("Искомая строка начинается с символа %ld\n",istr2 - str3 + 1);
   return 0;
}