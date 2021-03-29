int			main(int argc, char **argv)
{
	int		i;	
	int		flag;
	int		bytes;

	i = 0;
	flag = 0;
	bytes = 0;
	while (i < argc)
	{
		if (strcmp(argv[1], "-c") == 0 && flag == 0)
		{
			if (argv[i + 1] != 0)
				ft_enable_flag(argv[i + 1], argv[0], &bytes);
			i++;
			flag = 1;
		}
		else
			ft_print_tail(argv[i], argv[0], flag, bytes);
		i++;
	}
	return (0);
}
