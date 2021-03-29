int			main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		errno = 0;
		if (argc == 1 || ft_strcmp(argv[i], "-") == 0
				|| ft_strcmp(argv[i], "--") == 0)
			ft_readinput(argv[i], argv[0]);
		else if (i != 0)
			ft_display_file(argv[i], argv[0]);
		i++;
	}
	return (0);
}
