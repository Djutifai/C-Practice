#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			check_directory(char *str)
{
	return (open(str, O_DIRECTORY));
}

int			error_output(char *str, int len)
{
	write(2, str, len);
	return (1);
}

int			main(int argc, char **argv)
{
	int		i;
	char	c;

	if (argc == 1)
		return (error_output("File name missing.\n", 19));
	else if (argc > 2)
		return (error_output("Too many arguments.\n", 20));
	else
	{
		if (check_directory(argv[1]) == -1)
		{
			i = open(argv[1], O_RDONLY);
			if (i == -1)
				return (error_output("Cannot read file.\n", 18));
			else
			{
				while (read(i, &c, 1))
					ft_putchar(c);
				close(i);
			}
		}
		else
			return (error_output("Cannot read file.\n", 18));
	}
	return (0);
}
