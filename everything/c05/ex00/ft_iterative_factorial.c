int			ft_iterative_factorial(int nb);

int			ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = nb;
	res = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (res);
	while (i >= 1)
	{
		res = res * i;
		i--;
	}
	return (res);
}
