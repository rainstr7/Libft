/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit(main).c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 18:24:54 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/19 18:55:27 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{

if (c >= 48 && c <= 57) 
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main(void)
{
char ch;
while (1) 
	{
		ch = getchar();
	if (ch==' ') 
		break;
	if(ft_isdigit(ch)) 
		printf("%c is a digit\n", ch);
}
return 0;
}