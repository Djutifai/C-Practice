void		ft_putnbr(long long nb)
{
	char divdigit;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 10)
	{
		divdigit = (nb % 10) + 48;
		nb = nb / 10;
		ft_putnbr(nb);
		ft_putchar(divdigit);
	}
	else if (nb >= 0 && nb <= 9)
	{
		divdigit = nb + 48;
		ft_putchar(divdigit);
	}
}
