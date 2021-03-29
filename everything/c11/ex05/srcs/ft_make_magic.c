void		ft_make_magic(char **argv, t_fn *fp)
{
	long long a;
	long long b;

	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (argv[2][0] == '+')
		fp[0](a, b);
	else if (argv[2][0] == '-')
		fp[1](a, b);
	else if (argv[2][0] == '*')
		fp[2](a, b);
	else if (argv[2][0] == '/')
		fp[3](a, b);
	else if (argv[2][0] == '%')
		fp[4](a, b);
}
