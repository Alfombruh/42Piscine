char	*ft_strcat(char *dest, char *src)
{
	char	*count;
	char	*temp;

	count = dest;
	temp = src;
	while (*count)
		count++;
	while (*temp)
	{
		*count = *temp;
		count++;
		temp++;
	}
	*count = 0;
	return (dest);
}
