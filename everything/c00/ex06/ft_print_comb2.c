#include <unistd.h>

void		ft_print_comb2(void);
void		ft_print_chars(char a1, char a2, char b1, char b2);
void		ft_print_cycle(char a1, char a2, char b1, char b2);
void		ft_print_comma(char a1, char a2, char b1, char b2);

int			main(void)
{
	ft_print_comb2();
	return (0);
}

void		ft_print_comb2(void)
{
	char a1;
	char a2;
	char b1;
	char b2;

	a1 = '0';
	a2 = '0';
	b1 = '0';
	b2 = '0';
	ft_print_cycle(a1, a2, b1, b2);
}

void		ft_print_chars(char a1, char a2, char b1, char b2)
{
	char comma;
	char space;

	comma = 44;
	space = 32;
	write(1, &a1, 1);
	write(1, &a2, 1);
	write(1, &space, 1);
	write(1, &b1, 1);
	write(1, &b2, 1);
	ft_print_comma(a1, a2, b1, b2);
}

void		ft_print_cycle(char a1, char a2, char b1, char b2)
{
	while (a1 <= '9')
	{
		a2 = '0';
		while (a2 <= '9')
		{
			b1 = '0';
			while (b1 <= '9')
			{
				b2 = '0';
				while (b2 <= '9')
				{
					if (a1 < b1 || a2 < b2)
					{
						ft_print_chars(a1, a2, b1, b2);
					}
					b2++;
				}
				b1++;
			}
			a2++;
		}
		a1++;
	}
}

void		ft_print_comma(char a1, char a2, char b1, char b2)
{
	char comma;
	char space;

	comma = 44;
	space = 32;
	if (!(a1 == '9' & a2 == '8' & b1 == '9' & b2 == '9'))
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}
