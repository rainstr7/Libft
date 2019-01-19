/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha(main).c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 18:03:20 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/19 18:19:26 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	char ch;

	while(1) 
	{
		ch = getchar();
		if (ch==' ') 
			break;
		if (ft_isalpha (ch)) 
			printf ("%c is a letter\n", ch);
	}
	return (0);
}


