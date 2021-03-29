int			ft_recursive_factorial(int nb);

int			ft_recursive_factorial(int nb)
{
	int res;

	if (nb == 1)
		res = 1;
	else if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
