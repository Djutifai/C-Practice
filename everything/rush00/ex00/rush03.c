void		ft_putchar(char c);
void		ft_print_first(int *i, int *j, int x);
void		ft_print_middle(int *i, int *j, int x);
void		ft_print_last(int *i, int *j, int x);

void		rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < x && j < y)
	{
		if (j == 0)
			ft_print_first(&i, &j, x);
		else if (j == y - 1)
			ft_print_last(&i, &j, x);
		else
			ft_print_middle(&i, &j, x);
	}
}

void		ft_print_first(int *i, int *j, int x)
{
	if (*i == 0)
	{
		ft_putchar(65);
		*i = *i + 1;
		if (x == 1)
		{
			*j = *j + 1;
			*i = 0;
            ft_putchar('\n');
		}
	}
	else if (*i == x - 1)
	{
		ft_putchar(67);
		*j = *j + 1;
		*i = 0;
        ft_putchar('\n');
	}
	else
	{
		ft_putchar(66);
		*i = *i + 1;
	}
}

void		ft_print_middle(int *i, int *j, int x)
{
	if (*i == 0)
	{
		ft_putchar(66);
		*i = *i + 1;
		if (x == 1)
		{
			*j = *j + 1;
			*i = 0;
            ft_putchar('\n');
		}
	}
	else if (*i == x - 1)
	{
		ft_putchar(66);
		*j = *j + 1;
		*i = 0;
        ft_putchar('\n');
	}
	else
	{
		ft_putchar(32);
		*i = *i + 1;
	}
}

void		ft_print_last(int *i, int *j, int x)
{
	if (*i == 0)
	{
		ft_putchar(65);
		*i = *i + 1;
	}
	else if (*i == x - 1)
	{
		ft_putchar(67);
		*i = *i + 1;
		*j = *j + 1;
        ft_putchar('\n');
	}
	else
	{
		ft_putchar(66);
		*i = *i + 1;
	}
}
