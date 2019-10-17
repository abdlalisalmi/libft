#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	char	*pstr;
	int		i;

	pstr = str;
	i = 0;
	while (pstr[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	new_str = malloc(ft_strlen(s1) + ft_strlen(s2));
	i = 0;
	j = 0;
	if (new_str != NULL)
	{
		while (s1[i] != '\0')
		{
			new_str[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			new_str[i] = s2[j];
			j++;
			i++;
		}
		new_str[i] = '\0';
		return (new_str);
	}
	return (NULL);
}

int main()
{
    char str1[] = "abdlali";
    char str2[] = "salmi";
    char *test = ft_strjoin(str1,str2);
    printf("\nMy Function : %s\n", test);
    return 0;
}