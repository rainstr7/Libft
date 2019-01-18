/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr(main).c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 18:11:42 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/18 18:21:27 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	int i;
	int num;

	i = 0;
	num = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		{
			if (s[i] == (unsigned char)c)
				num = i;
			
		i++;
		}
		if (num)
			return((char *)s + num);
		else
			return (0);
}

int main(void)
{
	char str [11]="0163456769";
	int ch = '6';
	char *ach1;
	char *ach2;

	ach1 = strrchr (str, ch);
	ach2 = ft_strrchr (str, ch);

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