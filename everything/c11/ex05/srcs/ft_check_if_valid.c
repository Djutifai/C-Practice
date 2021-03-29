int			ft_check_if_valid(char *op)
{
	if (ft_strlen(op) == 1)
	{
		if (op[0] == '+' || op[0] == '-' || op[0] == '*'
				|| op[0] == '/' || op[0] == '%')
			return (1);
	}
	return (0);
}
