void		ft_print_tail(char *path, char *outfile, int fl, int by)
{
	char	*c[BUF_SIZE];
	int		openi;
	int		strlen;
	int		ncounter;

	n = 0;
	openi = open(path, O_RDONLY);
	read(openi, &c, ft_strlen(c));
	strlen = ft_strlen(c);
	if (fl == 1)
	{
		while (n != 11)
		{
			while (c[strlen] != '\n')
				strlen--;
			strlen--;
			n++;
		}
	}
}
