int			ft_str_is_alpha(char *str);

int			ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
		}
		else
			return (0);
		i++;
	}
	return (1);
}
