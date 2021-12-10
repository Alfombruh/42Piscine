#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		size;

	size = 0;
	while (str[size] != '\0')
	{
		if (str[size] >= 48 && str[size] <= 57)
			size++;
		else
			return (0);
	}
	return (1);
}
