void		ft_illegal_offset(char *offset, char *outfile)
{
	write(2, basename(outfile), ft_strlen(basename(outfile)));
	write(2, ": ", 2);
	write(2, "illegal offset -- ", 18);
	write(2, offset, ft_strlen(offset));
	write(2, "\n", 1);
}
