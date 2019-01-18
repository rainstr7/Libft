/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero(main).c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 16:06:27 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/17 17:03:04 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    bzero(void *s, size_t n)
{
    unsigned char *str;
    int i;
    
    i = 0;
    str = (unsigned char *)s;
    while (n--)
    {
        str[i] = 0;
        i++;
    }
}

int main(void)
{
    unsigned char src1[15] = "1234567890";
    unsigned char src2[15] = "1234567890";
    bzero(src1, 14);
    printf("src1 = %s\n", src1);
    bzero(src2, 14);
    printf("src2 = %s\n", src2);
    return (0);
}