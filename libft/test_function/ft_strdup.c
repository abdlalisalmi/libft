#include<stdio.h>
#include<stdlib.h>
#include <string.h>
char *ft_strdup(const char *str)
{
    char *ptr;
    unsigned int i;

    i = 0;
    while (str[i])
        i++;
    ptr = malloc(i);
    i = 0;
    while (str[i])
    {
        ptr[i] = str[i];
        i++;
    }
    ptr[i] = '\0';
    
    return (ptr);
    
}


int main()
{
    char *str = "";
    char *res1;
    char *res2;
    res1 = strdup(str);
    printf("Original : %s\n", res1);

    res2 = ft_strdup(str);
    printf("My : %s\n", res2);
    return 0;
}