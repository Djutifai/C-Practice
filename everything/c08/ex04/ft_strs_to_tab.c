#include <stdlib.h>
#include "ft_stock_str.h"

void				ft_str_cpy(char *dst, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

int					count_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_str_mal_cpy(char *src)
{
	int		i;
	char	*buf;

	i = 0;
	buf = (char*)malloc(sizeof(char) * count_len(src) + 1);
	if (buf == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		buf[i] = src[i];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*buf;
	int			i;

	i = 0;
	buf = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (buf == NULL)
		return (NULL);
	while (i < ac)
	{
		buf[i].str = av[i];	
		buf[i].copy = ft_str_mal_cpy(av[i]);
		i++;
	}
	buf[ac].str = 0;
	return (buf);
}
