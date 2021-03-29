#define NULL ((void*)0)

int			ft_count_if(char **tab, int length, int (*f)(char*))
{
	int num;
	int i;

	i = 0;
	num = 0;
	if (tab)
	{
		while (i < length && tab[i] != NULL)
		{
			if (f(tab[i]) != 0)
				num++;
			i++;
		}
	}
	return (num);
}
