#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strchr(const char * str, int c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return ((char*)(str + i));
        i++;
    }
    return (NULL);
}

int main()
{
    char str[] = "abdlali";
    char ch = 'h';
    char *test1 = strchr(str, ch);
    char *test2 = ft_strchr(str, ch);
    printf("Origin : %s\n", test1);
    printf("My: %s", test2);
    return 0;
}