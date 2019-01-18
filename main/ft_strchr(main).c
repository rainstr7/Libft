/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr(main).c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 17:23:37 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/18 18:02:56 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		{
			if (s[i] == (unsigned char)c)
			{
				return((char *)s + i);
			}
		i++;
		}
		return (0);
}

int main(void)
{
	char str [11]="0123456789";
	int ch = 'a';
	char *ach1;
	char *ach2;

	ach1 = strchr (str, ch);
	ach2 = ft_strchr (str, ch);

	if (ach1 == NULL)
		printf ("Символ в строке не найден\n");
	else
		printf ("Искомый символ в строке на позиции # %ld\n",ach1 - str + 1);

	if (ach2 == NULL)
		printf ("Символ в строке не найден\n");
	else
		printf ("Искомый символ в строке на позиции # %ld\n",ach2 - str + 1);
		

	return (0);
}