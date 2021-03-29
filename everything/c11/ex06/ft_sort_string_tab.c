#include <unistd.h>
#include <stdio.h>

int			ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	return (s1[i] - s2[i]);
}

void		ft_sort(int len, char **tab)
{
	char	*temp;
	int		i;

	i = len - 1;
	while (i > 0)
	{
		if (ft_strcmp(tab[i - 1], tab[i]) > 0)
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

void		ft_sort_string_tab(char **tab)
{
	int i;
	int len;

	i = 0;
	if (tab)
	{
		len = ft_countlen(tab);
		while (i < len)
		{
			ft_sort(len, tab);
			i++;
		}
	}
}
