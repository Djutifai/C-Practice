#include <stdlib.h>

char		*ft_strjoin(int size, char **strs, char *sep);
int			count_len(int size, char **strs);
int			count_sep(int size, char *sep);
void		add_str(char *dst, char *src, int *point);
void		add_sep(char *dst, char *sep, int *point, int *num);

int			count_sep(int size, char *sep)
{
	int i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	i = (i * (size));
	return (i);
}

void		add_sep(char *dst, char *sep, int *point, int *num)
{
	int i;

	i = 0;
	if (*num != 1)
	{
		while (sep[i] != '\0')
		{
			dst[*point] = sep[i];
			i++;
			*point = *point + 1;
		}
		*num = *num - 1;
	}
}

void		add_str(char *dst, char *src, int *point)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[*point] = src[i];
		i++;
		*point = *point + 1;
	}
}

int			count_len(int size, char **strs)
{
	int i;
	int j;
	int res;

	i = 0;
	res = 0;
	while (i != size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			res++;
			j++;
		}
		i++;
	}
	return (res);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	char	*buf;
	int		len;
	int		i;
	int		curpoint;
	int		number;

	i = 0;
	number = size;
	curpoint = 0;
	if (size == 0)
	{
		buf = (char*)malloc(sizeof(char));
		return (buf);
	}
	len = count_len(size, strs) + count_sep(size, sep);
	buf = (char*)malloc((sizeof(char) * len) + 1);
	while (i != size)
	{
		add_str(buf, strs[i], &curpoint);
		add_sep(buf, sep, &curpoint, &number);
		i++;
	}
	buf[curpoint] = '\0';
	return (buf);
}
