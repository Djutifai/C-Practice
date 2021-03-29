int			ft_fibonacci(int index);

int			ft_fibonacci(int index)
{
	int res;

	if (index < 0)
		return (-1);
	if (index == 0)
		res = 0;
	else if (index == 1)
		res = 1;
	else
		res = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (res);
}
