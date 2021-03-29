void		ft_enable_flag(char *flag, char *outfile, int *bytes)
{
	int i;

	i = 0;
	while (flag[i] != '\0')
	{
		if (flag[i] < 48 || flag[i] > 57)
		{
			ft_illegal_offset(flag, outfile);
			return ;
		}
	}
	ft_make_number(flag, &bytes);
}
