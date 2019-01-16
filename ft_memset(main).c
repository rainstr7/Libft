#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{    
    int i;
    unsigned char *str;

    i = 0;
    if (n <= 0)
        return(s);
    str = (unsigned char *)s;
    while (str[i] != '\0')
    {
        if (n > i)
        {
            str[i] = (unsigned char)c;
            i++;
        }
    }
    return (s);
}

int main(void)
{
    unsigned char src1[15] = "1234567890";
    unsigned char src2[15] = "1234567890";
    memset(src1, '1', 3);
    printf("src1 = %s\n", src1);
    ft_memset(src2, '7', 3);
    printf("src2 = %s\n", src2);


    return (0);
}