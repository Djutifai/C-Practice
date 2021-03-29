#include <unistd.h>

void		ft_print_comb(void);
void		ft_printing(char i, char j, char k);
void		ft_print_char(char c);
void		ft_print_comma(char i, char j, char k);

void		ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	j = '1';
	k = '2';
	printing(i, j, k);
}

void		ft_printing(char i, char j, char k)
{
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				if (i < j & j < k)
				{
					print_char(i);
					print_char(j);
					print_char(k);
					print_comma(i, j, k);
				}
				k++;
			}
			k = '2';
			j++;
		}
		j = '1';
		i++;
	}
}

void		ft_print_char(char c)
{
	write(1, &c, 1);
}

void		ft_print_comma(char i, char j, char k)
{
	if (!(i == '7' & j == '8' & k == '9'))
	{
		print_char(44);
		print_char(32);
	}
}
