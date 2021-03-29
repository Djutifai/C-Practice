void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp1;

	temp1 = *a / *b;
	*b = *a % *b;
	*a = temp1;
}
