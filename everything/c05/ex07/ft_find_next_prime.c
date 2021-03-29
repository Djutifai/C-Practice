int			ft_find_next_prime(int nb);

int			ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (2);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			nb++;
			i = 1;
		}
		i++;
	}
	return (nb);
}
