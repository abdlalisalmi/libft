#include <stdio.h> 
#include <string.h> 
int    ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t size)
{
    unsigned int i;

    i = 0;
    while (i < (size - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (unsigned long )(ft_strlen((char*)src));
}
int main()
{
    char src[] = "abdlali";
    char dst[10] = "salmi";
    char src1[] = "abdlali";
    char dst1[10] = "salmi";
    printf("Origina func : %lu, %s\n" , strlcpy(dst, src, 4),dst);
    printf("My Function : %lu , %s",ft_strlcpy(dst1,src1,4),dst1);
    return 0;
}