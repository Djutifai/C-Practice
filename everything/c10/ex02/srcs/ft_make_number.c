void		ft_make_number(char *flag, int *bytes)
{
	int i;
	int strlen;
	int helper;

	i = 0;
	helper = 1;
	strlen = ft_strlen(flag);
	if (strlen == 1)
		*bytes = flag[i] - '0';
	else
	{
		while (strlen-- > 1)
			helper = helper * 10;
		strlen = ft_strlen(flag);
		while (i <= strlen)
		{
			*bytes = *bytes + (flag[i] - '0') * helper;
			helper = helper / 10;
		}
	}
}
