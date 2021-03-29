int			ft_strcmp(char *s1, char *s2);
int			ft_not_equal(char c1, char c2);

int			ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] != s2[i])
    	i++;
	return (s1[i] - s2[i]);
}