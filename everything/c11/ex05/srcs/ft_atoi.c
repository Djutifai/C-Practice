long long		ft_atoi(char *str)
{
	int			i;
	int			minuscounter;
	long long	res;

	i = 0;
	minuscounter = 0;
	res = 0;
	ft_starting_point(str, &i, &minuscounter);
	res = ft_make_the_number(str, &i);
	if (minuscounter % 2 == 1)
		res = res * (-1);
	return (res);
}

long long		ft_make_the_number(char *str, int *i)
{
	long long res;

	res = 0;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		res = 10 * res + (str[*i] - '0');
		*i = *i + 1;
	}
	return (res);
}

void			ft_starting_point(char *str, int *i, int *minuscounter)
{
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*minuscounter = *minuscounter + 1;
		*i = *i + 1;
	}
}
