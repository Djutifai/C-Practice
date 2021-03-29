void			ft_display_file(char *path, char *outname, int *fl, int *byt)
{
	int		openi;
	int		readi;
	char	c[BUF_SIZE];

	errno = 0;
	openi = open(path, O_RDONLY);
	if (openi == -1)
		ft_display_error(errno, outname, path);
	else
	{
		readi = read(openi, &c, 1);
		if (readi < 0)
			ft_display_error(errno, outname, path);
		else
			ft_print_tail(path, outname, fl, byt);
		close(openi);
	}
}
