/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat(main).c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 16:06:54 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/18 16:32:56 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
int len;
int i;
char *str;

len = 0;
i = 0;
len = strlen(s1);
if (s1 == NULL || s2 == NULL)
	return (0);
while (s2[i] != '\0')
{	
	s1[len] = s2[i];
	len++;
	i++;
}
s1[len] = '\0';
return (s1);
}

int	main(void)
{
char app1[1024] = "вторая строка";
char dst1[1024] = "первая строка";

char app2[1024] = "вторая строка";
char dst2[1024] = "первая строка";

strcat (dst1, app1);
printf ("dst1: %s\n", dst1);

ft_strcat (dst2, app2);
printf ("dst2: %s\n", dst2);

return (0);
} 