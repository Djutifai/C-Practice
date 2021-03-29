#include <stdlib.h>

int			*ft_range(int min, int max);

int			*ft_range(int min, int max)
{
	int *buf;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	buf = (int*)malloc(sizeof(int) * (max - min));
	while (i < (max - min))
	{
		buf[i] = min + i;
		i++;
	}
	return (buf);
}
