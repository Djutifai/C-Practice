int			ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int posval;
	int negval;

	i = 0;
	posval = 0;
	negval = 0;
	if (!tab)
		return (0);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			posval++;
		if (f(tab[i], tab[i + 1]) <= 0)
			negval++;
		i++;
		if (posval != i && negval != i)
			return (0);
	}
	if (negval == length - 1 || posval == length - 1)
		return (1);
	return (0);
}
