#include <stdio.h>

int	ft_strlowcase(char *str)
{
	int		size;

	size = 0;
	while (str[size] != '\0')
	{
		if (str[size] >= 65 && str[size] <= 97)
		{
			str[size] = str[size] + 32;
			++size;
		}
		else
		{
			++size;
		}
	}
	return (*str);
}
