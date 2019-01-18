/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat(main).c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 16:39:08 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/18 16:48:59 by ihahn            ###   ########.fr       */
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

char *ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
int len;
int i;
char *str;

len = 0;
i = 0;
len = strlen(s1);
if (s1 == NULL || s2 == NULL)
	return (0);
while ((s2[i] != '\0') && (i <= n))
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
char app1[10] = "000";
char dst1[10] = "000";
char src1[10] = "12345";

char app2[1024] = "000";
char dst2[1024] = "000";
char src2[10] = "12345";

strncat (app1, src1, 3);
printf ("app1: %s\n", app1);

strncat (dst1, src1, 7);
printf ("dst1: %s\n", dst1);

ft_strncat (app2, src1, 3);
printf ("app2: %s\n", app1);

ft_strncat (dst2, src1, 7);
printf ("dst2: %s\n", dst1);

return (0);
} 