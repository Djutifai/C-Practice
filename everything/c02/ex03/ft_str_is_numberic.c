int			ft_str_is_numberic(char *str);

int			ft_str_is_numberic(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
		}
		else
			return (0);
		i++;
	}
	return (1);
}
