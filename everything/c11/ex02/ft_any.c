int			ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	if (tab)
	{
		while (tab[i] != '\0')
		{
			if (f(tab[i]) != 0)
				return (1);
			i++;
		}
	}
	return (0);
}
