#include<stdio.h>
#include<string.h>

int		ft_isalpha(int arg)
{
	if (((arg >= 'a') && (arg <= 'z')) || ((arg >= 'A') && (arg <= 'Z')))
		return (1);
	return (0);
}

int main()
{
    	int i = 'A';
		while (i <= 'z')
		{
			printf("%d ",ft_isalpha(i));
			i++;
		}
    return 0;
}