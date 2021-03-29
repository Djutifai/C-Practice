int			ft_recursive_power(int nb, int power);

int			ft_recursive_power(int nb, int power)
{
	int res;

	res = nb;
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else if (power < 0)
		return (0);
	else
		res = res * ft_recursive_power(nb, power - 1);
	return (res);
}
