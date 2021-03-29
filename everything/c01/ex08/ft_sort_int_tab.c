void	ft_sort_int_tab(int *tab, int size);
void	ft_sorting(int *tab, int size, int *swaps);

void	ft_sort_int_tab(int *tab, int size)
{
	int swaps;

	swaps = 1;
	while (swaps != 0)
	{
		swaps = 0;
		if (size != 1)
		{
			ft_sorting(tab, size, &swaps);
		}
	}
}

void	ft_sorting(int *tab, int size, int *swaps)
{
	int i;
	int temp;

	temp = 0;
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			*swaps = *swaps + 1;
		}
		i++;
	}
}
