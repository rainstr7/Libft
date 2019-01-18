/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat(main).c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 16:54:26 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/18 17:28:21 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include <stdio.h>

/*size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	len1;

	if (dst == NULL || src == NULL || size == 0)
		return (0);
	i = 0;
	len = 0;
	len1 = ft_strlen(dst);
	while (dst[len] && len < size)
		len++;
	if (!(len < size))
		return (size + ft_strlen(src));
	while (src[i] && i < (size - len1 - 1))
	{
		dst[len + i] = ((char *)src)[i];
		i++;
	}
	dst[len + i] = '\0';
	return (len + ft_strlen(src));
}
*/
char  buf[10];           // буфер размером меньше строки
 
int main()
{  char   *str = "образец строки";
   size_t  sz;
 
   buf[0] = '\0';        // избыточная инициализация для отладочной печати
 
   printf("строка: \"%s\"\n\n", str);
   printf("буфер перед копированием: \"%s\"\n", buf);
 
   sz = strlcpy(buf, str, sizeof(buf));    
   if (sz >= sizeof(buf))           // пример определения усечения строки      
      printf("обнаружено усечение строки с %d до %d символов !\n", sz, sizeof(buf)-1);
 
   printf("буфер после копирования:  \"%s\"\n", buf);
 
   return 0;
}
