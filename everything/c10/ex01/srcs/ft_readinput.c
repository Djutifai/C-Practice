void		ft_readinput(char *output, char *argv)
{
	int		i;
	char	*c[BUF_SIZE];

	errno = 0;
	while ((i = read(0, c, BUF_SIZE)))
	{
		if (i < 0)
		{
			ft_display_error(errno, output, argv);
			break ;
		}
		write(1, c, i);
	}
}
