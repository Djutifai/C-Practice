int			ft_atoi(char *str);
int			ft_make_the_number(char *str, int *i);
void		ft_starting_point(char *str, int *i, int *minuscounter);
void		ft_is_space(char *str, int *i);

int			ft_atoi(char *str)
{
	int i;
	int minuscounter;
	int res;

	i = 0;
	minuscounter = 0;
	res = 0;
	ft_is_space(str, &i);
	ft_starting_point(str, &i, &minuscounter);
	res = ft_make_the_number(str, &i);
	if (minuscounter % 2 == 1)
		res = res * (-1);
	return (res);
}

int			ft_make_the_number(char *str, int *i)
{
	int res;

	res = 0;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		res = 10 * res + (str[*i] - '0');
		*i = *i + 1;
	}
	return (res);
}

void		ft_starting_point(char *str, int *i, int *minuscounter)
{
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*minuscounter = *minuscounter + 1;
		*i = *i + 1;
	}
}

void		ft_is_space(char *str, int *i)
{
	if (str[*i] == '\n' || str[*i] == '\f' || str[*i] == '\r')
	{
		*i = *i + 1;
		ft_is_space(str, i);
	}
	else if (str[*i] == '\v' || str[*i] == '\t' || str[*i] == ' ')
	{
		*i = *i + 1;
		ft_is_space(str, i);
	}
}
