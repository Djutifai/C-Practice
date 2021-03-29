#include <unistd.h>

void		ft_putnbr(int nb);
void		ft_print_char(char c);

void		ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_print_char('-');
		ft_putnbr((nb * -1));
	}
	if (nb < 10)
	{
		ft_print_char((char)(nb + '0'));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_print_char((nb % 10) + '0');
	}
}

void		ft_print_char(char c)
{
	write(1, &c, 1);
}
