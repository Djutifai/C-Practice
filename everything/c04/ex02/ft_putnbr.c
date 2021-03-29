#include <unistd.h>

void		ft_putnbr(int nb);
void		ft_putchar(char c);

void		ft_putnbr(int nb)
{
	char divdigit;

	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			ft_putnbr(147583648);
		}
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

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
