#include <stdlib.h>

void	ft_bzero(void *str, size_t n)
{
	char			*pstr;
	unsigned int	i;

	pstr = str;
	i = 0;
	while (i < n)
	{
		pstr[i] = 0;
		i++;
	}
}
void *ft_calloc(size_t nitems, size_t size)
{
    void *ptr;

	ptr = malloc (nitems * size);
	if (nitems > 0)
	{
	    ft_bzero (ptr, nitems * nitems);
	    return (ptr);
    }
    return (NULL);
}

int main()
{
    int* ptr; 
    int* ptr2;
    int n, i;
  
    n = 5; 
    ptr = (int*)calloc(n, sizeof(int));
    ptr2 = (int*)ft_calloc(n, sizeof(int));
//Original function
    printf("\nOriginal function:\n");
    if (ptr == NULL)
        printf("Memory not allocated.\n"); 
    else 
        printf("Memory successfully allocated using calloc.\n");
    printf("size of array is %d\n",sizeof(ptr));
    printf("The elements of the array are: "); 
    for (i = 0; i < n; ++i)
        printf("%d,", ptr[i]); 
//My function
    printf("\n\nMy function:\n");
    if (ptr2 == NULL)
        printf("Memory not allocated.\n"); 
    else 
        printf("Memory successfully allocated using calloc.\n");
    printf("size of array is %d\n",sizeof(ptr2));
    printf("The elements of the array are: "); 
    for (i = 0; i < n; ++i)
        printf("%d,", ptr2[i]);
    return (0);
}