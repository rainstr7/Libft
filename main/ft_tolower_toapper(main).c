/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_toapper(main).c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 19:12:39 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/19 19:19:58 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}

int		ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}

int main(void)
{
	printf("alpha a = %c\n", ft_toupper('a'));
	printf("alpha A = %c\n", ft_tolower('A'));
	return (0);
}
