int			ft_sqrt(int nb);
int			maincycle(int nb, int *leftsqrt, int *rightsqrt);

int			ft_sqrt(int nb)
{
	int squareroot;
	int leftsqrt;
	int rightsqrt;

	if (nb <= 0)
		return (0);
	squareroot = maincycle(nb, &leftsqrt, &rightsqrt);
	return (squareroot);
}

int			maincycle(int nb, int *leftsqrt, int *rightsqrt)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i != nb)
	{
		*leftsqrt = i * i;
		*rightsqrt = j * j;
		if (*leftsqrt <= nb && nb <= *rightsqrt)
			break ;
		i++;
		j++;
	}
	if (*leftsqrt == nb)
		return (i);
	else if (*rightsqrt == nb)
		return (j);
	else
		return (0);
}
