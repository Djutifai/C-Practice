#include <stdlib.h>

int			*ft_map(int *tab, int length, int (*f)(int))
{
	int *arr;
	int i;

	i = 0;
	arr = (int*)malloc(sizeof(int) * length);
	if (tab)
	{
		while (i < length)
		{
			arr[i] = f(tab[i]);
			i++;
		}
	}
	return (arr);
}
