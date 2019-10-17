#include<stdio.h>
#include<string.h>


char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr;
    unsigned int i;
 
    ptr = malloc(len);
    i = 0;
    if (ptr != NULL)
    {
        while (i < len)
        {
            ptr[i] = s[start];      
            start++;
            i++;
        }
        ptr[i] = '\0';
        return ptr;
    }
    return (NULL);
}


int main()
{
    char str[] = "123456789";
    char *test = ft_substr(str,4,4);
    printf("\nString : %s\n", str);
    printf("\nMy Function : %s\n", test);
    return (0);
}