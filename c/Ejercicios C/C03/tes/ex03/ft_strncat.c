char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*count;
	char			*temp;
	unsigned int	lim;

	lim = 0;
	count = dest;
	temp = src;
	while (*count)
		count++;
	while (*temp && lim < nb)
	{
		*count = *temp;
		count++;
		temp++;
		lim++;
	}
	*count = 0;
	return (dest);
}
