#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char *pstr1;
	unsigned char *pstr2;
	unsigned int i;

	pstr1 = (unsigned char)str1;
	pstr2 = (unsigned char)str2;
	i = 0;
	if (!(*pstr1 == '\0' && *pstr2 == '\0'))
	{
		while (i < n)
		{
			if (pstr1[i] != pstr2[i])
				return ((char*)pstr1[i] - (char*)pstr2[i]);
		}
	}
	return (0);
}


int main()
{
    char str1[] = "A";
    char str2[] = "a";
    int n = 4;

    int origin = strncmp(str1,str2,n);
    printf("Origin : %d\n",origin);

    int my = strncmp(str1,str2,n);
    printf("Origin : %d\n",my);
    return(0);
}