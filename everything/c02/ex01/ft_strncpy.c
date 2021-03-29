char		*ft_strncpy(char *dest, char *src, unsigned int n);

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	int srclen;

	i = 0;
	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	while (i < n)
	{
		if (i < srclen)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
}
