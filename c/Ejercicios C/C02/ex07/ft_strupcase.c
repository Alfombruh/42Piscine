#include <stdio.h>

int	ft_strupcase(char *str)
{
	int		size;

	size = 0;
	while (str[size] != '\0')
	{
		if (str[size] >= 97 && str[size] <= 122)
		{
			str[size] = str[size] - 32;
			++size;
		}
		else
		{
			++size;
		}
	}
	return (*str);
}
