#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strrchr(const char *str, int c)
{
    int i;

    i = 0;
    if (*str != '\0')
    {
        while(str[i] != '\0')
            i++;
        while (i >= 0)
        {
            if (str[i] == c)
                return ((char*)(str + i));
            i--;
        }
    }
    return (NULL);
}


int main()
{
    char src[] = "abdlali";
    char chr = 's';
    char *origin = strrchr(src,chr);
    char *my = ft_strrchr(src,chr);

    printf("Origin : %s\n",origin);
    printf("Origin : %s",my);
    return (0);
}