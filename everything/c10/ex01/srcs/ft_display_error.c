void		ft_display_error(int errn, char *outname, char *argv)
{
	write(2, basename(outname), ft_strlen(basename(outname)));
	write(2, ": ", 2);
	write(2, basename(argv), ft_strlen(basename(argv)));
	write(2, ": ", 2);
	write(2, strerror(errn), ft_strlen(strerror(errn)));
	write(2, "\n", 1);
}
