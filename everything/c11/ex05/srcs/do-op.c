int			main(int argc, char **argv)
{
	t_fn fp[5];

	ft_fill_funarr(fp);
	if (argc == 4)
	{
		if (ft_check_if_valid(argv[2]))
			ft_make_magic(argv, fp);

		else
			ft_putstr("0\n");
	}
	return (0);
}
