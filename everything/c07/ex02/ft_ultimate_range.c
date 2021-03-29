#include <stdlib.h>

int			ft_ultimate_range(int **range, int min, int max);

int			ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *pi;

	i = 0;
	if (min >= max)
	{
		pi = NULL;
		*range = pi;
		return (0);
	}
	pi = malloc((max - min) * sizeof(int));
	if (pi == NULL)
		return (-1);
	while (i < (max - min))
	{
		pi[i] = min + i;
		i++;
	}
	*range = pi;
	return (i);
}
