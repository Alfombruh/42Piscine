#include <stdio.h>

int	ft_str_is_printeable(char *str)
{
	int		size;

	size = 0;
	while (str[size] != '\0')
	{
		if ((str[size] >= 0 && str[size] <= 31) || (str[127] == 127))
			size++;
		else
			return (0);
	}
	return (1);
}
