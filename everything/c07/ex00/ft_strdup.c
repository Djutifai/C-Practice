#include <stdlib.h>

char		*ft_strdup(char *src);

char		*ft_strdup(char *src)
{
	char	*buf;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	buf = (char*)malloc((sizeof(char) * i) + 1);
	i = 0;
	if (buf == NULL)
	   	return (NULL);
	while (src[i] != '\0')
	{
		buf[i] = src[i];
		i++;
	}
	src[i] = '\0';
	return (buf);
}
