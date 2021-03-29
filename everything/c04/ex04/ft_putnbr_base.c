#include <unistd.h>

void		ft_putnbr_base(int nbr, char *base);
int			ft_check_base(char *base, int *pcounter);
void		ft_putchar(char c);
void		ft_write_number(int nbr, char *base, int counter);

void		ft_putnbr_base(int nbr, char *base)
{
	int counter;
	int plus;

	counter = 0;
	plus = ft_check_base(base, &counter);
	if (counter == 0 || counter == 1)
	{
	}
	else if (plus == 1)
		ft_write_number(nbr, base, counter);
	else
	{
	}
}

void		ft_write_number(int nbr, char *base, int counter)
{
	int i;

	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr == -2147483648)
		{
			ft_write_number(2, base, counter);
			ft_write_number(147483648, base, counter);
		}
		nbr = nbr * (-1);
	}
	if (nbr >= counter)
	{
		i = nbr % counter;
		nbr = nbr / counter;
		ft_write_number(nbr, base, counter);
		ft_putchar(base[i]);
	}
	else if (nbr >= 0 && nbr < counter)
	{
		i = nbr % counter;
		ft_putchar(base[i]);
	}
}

int			ft_check_base(char *base, int *pcounter)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (base[i] != '\0' && base[i] != '-' && base[i] != '+')
	{
		while (base[i] != base[j] && base[j] != '\0' && base[j] != '+'
				&& base[j] != '-')
			j++;
		if (base[i] == base[j])
			return (0);
		if (base[j] == '+' || base[j] == '-')
			return (0);
		i++;
		*pcounter = *pcounter + 1;
		j = i + 1;
	}
	return (1);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
