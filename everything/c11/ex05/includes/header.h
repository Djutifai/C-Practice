#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stddef.h>

typedef	void	(*t_fn)	(long long, long long);

int			ft_check_if_valid(char *op);
long long	ft_atoi(char *str);
long long	ft_make_the_number(char *str, int *i);
void		ft_starting_point(char *str, int *i, int *minuscounter);
void		ft_putstr(char *str);
void		ft_putchar(char c);
void		ft_div(long long a, long long b);
void		ft_pls(long long a, long long b);
void		ft_min(long long a, long long b);
void		ft_mul(long long a, long long b);
void		ft_mod(long long a, long long b);
void		ft_fill_funarr(t_fn *fp);
void		ft_make_magic(char **argv, t_fn *fp);
void		ft_putnbr(long long num);
int			ft_strlen(char *str);
#endif
