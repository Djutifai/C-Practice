#include <unistd.h>
#include <stdio.h>

void		ft_sort(int len, char **tab, int (*cmp)(char *, char*))
{
	char	*temp;
	int		i;

	i = len - 1;
	while (i > 0)
	{
		if (cmp(tab[i - 1], tab[i]) > 0)
		{
			temp = tab[i - 1];
			tab[i - 1] = tab[i];
			tab[i] = temp;
		}
		i--;
	}
}

int			ft_countlen(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != '\0')
		i++;
	return (i);
}

void		ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int len;

	i = 0;
	if (tab)
	{
		len = ft_countlen(tab);
		while (i < len)
		{
			ft_sort(len, tab, cmp);
			i++;
		}
	}
}
