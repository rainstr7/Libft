/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset(main).c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihahn <ihahn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 14:48:19 by ihahn             #+#    #+#             */
/*   Updated: 2019/01/17 17:03:44 by ihahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{    
    int i;
    unsigned char *str;

    if (n == 0)
        return(s); 
    i = 0;
    str = (unsigned char *)s;
    while (n--)
    {
        str[i] = (unsigned char)c;
        i++;
        //if (str[i] == '\0')
        //    return(s);
    }
    return (s);
    /*
    src1 = 111111111111111^K$
    src2 = 111111111111111111111111111111^K$ ???
    */
}

int main(void)
{
    unsigned char src1[15] = "1234567890";
    unsigned char src2[15] = "1234567890";
    memset(src1, '1', 14);
    printf("src1 = %s\n", src1);
    ft_memset(src2, '1', 14);
    printf("src2 = %s\n", src2);
    return (0);
}