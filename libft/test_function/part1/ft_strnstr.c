#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strnstr(const char *str, const char *chr, size_t len)
{
	unsigned int j;
	unsigned int i;

	j = 0;
	if (*chr == '\0')
		return ((char*)str);
	while (str[j] != '\0' && (size_t)j < len)
	{
		if (str[j] == chr[0])
		{
			i = 1;
			while (chr[i] != '\0' && str[j + i] == chr[i] &&
					(size_t)(j + i) < len)
				++i;
			if (chr[i] == '\0')
				return ((char*)str + j);
		}
		++j;
	}
	return (NULL);
}
int main()
{
//creation:
    char str1[] = "abdlali";
    char str2[] = "abdlali";

    char chr[] = "bd";

//Affictation:
    char *test = strnstr(str1,chr,3);
    char *test1 = ft_strnstr(str2,chr,3);
//printing:
    printf("\nOrigin    : %s\n",test);
    printf("\nMy        : %s\n",test1);

    return (0);
}