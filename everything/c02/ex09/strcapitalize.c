char		*ft_strcapitalize(char *str);
void		ft_check_for_symbols(char *i, int *p);

void		ft_check_for_symbols(char *i, int *p)
{
	if (*i >= 97 && *i <= 122)
	{
		if (*p == 0)
		{
			*i = (int)*i - 32;
			*p = *p + 1;
		}
	}
	else if (*i >= 65 && *i <= 90)
	{
		if (*p != 0)
		{
			*i = (int)*i + 32;
		}
	}
}

char		*ft_strcapitalize(char *str)
{
	int firstsymbol;
	int i;

	i = 0;
	firstsymbol = 0;
	while (str[i] != '\0')
	{
		ft_check_for_symbols(&str[i], &firstsymbol);
		if (str[i] != 32)
		{
			firstsymbol++;
		}
		else if (str[i] == 32)
		{
			firstsymbol = 0;
		}
		i++;
	}
	return (str);
}
