#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    unsigned int i;

    i = 0;
    if (!(*str1 == '\0' && *str2 == '\0'))
    {
        while (i < n)
        {
            if (str1[i] != str2[i])
                return (str1[i] - str2[i]);
        }
    }
    return (0);
}

int main()
{
    char str1[] = "ABD";
    char str2[] = "ABD";

    int origin = strncmp(str1,str2,3);
    printf("Origin : %d\n",origin);

    int my = strncmp(str1,str2,3);
    printf("Origin : %d\n",my);
    return(0);
}