void			ft_display_file(char *filepath, char *outname)
{
	int		openi;
	int		readi;
	char	c[BUF_SIZE];

	errno = 0;
	openi = open(filepath, O_RDONLY);
	if (openi == -1)
		ft_display_error(errno, outname, filepath);
	else
	{
		readi = read(openi, &c, 1);
		if (readi < 0)
			ft_display_error(errno, outname, filepath);
		else
		{
			while (read(openi, &c, ft_strlen(c)))
				ft_putstr(c);
		}
		close(openi);
	}
}
