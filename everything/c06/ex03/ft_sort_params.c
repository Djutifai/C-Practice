#include <unistd.h>
#include <stdio.h>

int			ft_strcmp(char *s1, char *s2);
void		ft_sort(int argc, char **args);
void		ft_print(int argc, char **argv);

int			ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	return (s1[i] - s2[i]);
}

void		ft_sort(int argc, char **args)
{
	char	*temp;
	int		i;

	i = argc - 1;
	while (i > 1)
	{
		if (ft_strcmp(args[i - 1], args[i]) > 0)
		{
			temp = args[i - 1];
			args[i - 1] = args[i];
			args[i] = temp;
		}
		i--;
	}
}

void		ft_print(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}

int			main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		ft_sort(argc, argv);
		i++;
	}
	ft_print(argc, argv);
	return (0);
}
