char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	temp;

	if (*to_find == 0)
		return (str);
	count = 0;
	while (str[count] != '\0')
	{
		temp = 0;
		while (to_find[temp] == str[count + temp])
		{
			if (to_find[temp + 1] == '\0')
				return (str + count);
			temp++;
		}
		count++;
	}
	return (0);
}
