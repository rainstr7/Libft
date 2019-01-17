/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr(main).c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 20:33:58 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/17 21:01:27 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *flag;
	int i;

	i = 0;
	if (!s)
		return (NULL);
	while (n--)
	{
		if (((unsigned char *)s)[i] == (unsigned char )c)
			{
				flag = &((unsigned char *)s)[i];
				return (flag);
			}
		i++;
	}
	return (NULL);

}


int main(void)
{
	unsigned char src[15] = "1234567890";
	unsigned char src2[15] = "1234567890";
	char *sym;

	printf ("\nsrc old: %s\n", src);
	sym = memchr (src, '7', 10);
	if (sym != NULL)
		sym[0]='!';
	printf ("src new: %s\n\n", src);

	printf ("src2 old: %s\n", src2);
	sym = ft_memchr (src2, '7', 10);
	if (sym != NULL)
		sym[0]='!';
	printf ("src2 new: %s\n\n", src2);

	return (0);
}