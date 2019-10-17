#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t  ft_strlcat(char * dst, const char *  src, size_t size)
{
    unsigned int i;
    unsigned int j;
    
    i = 0;
    j = 0;
    while (dst[i] != '\0')
        i++;
    while (src[j] && (j < (size - 1)))
    {
        if ((unsigned long) strlen(dst) == (size - 1))
            break ;
        if ((unsigned long) strlen(dst) > (size - 1))
            break ;
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return ((unsigned long )(ft_strlen((char*)src)));
    
}

int main()
{
    int n = 10;
    char src[] = "abdlali";
    char dst[100] = "salmided";
    int test = strlcat(dst,src,n);

    char src1[] = "abdlali";
    char dst1[100] = "salmided";
    int test1 = ft_strlcat(dst1,src1,n);

    printf("\nOrigin Function ---------\n");
    printf("Return : %d\n", test);
    printf("src string : %s \n", src);
    printf("dst string : %s", dst);

    printf("\n\nMy Function ---------\n");
    printf("Return : %d\n", test1);
    printf("src string : %s \n", src1);
    printf("dst string : %s\n", dst1);
    return (0);
}