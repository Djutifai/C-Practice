int			ft_iterative_power(int nb, int power);

int			ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	i = 1;
	res = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (i != power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
