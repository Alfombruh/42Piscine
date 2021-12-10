#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		size;

	size = 0;
	while (str[size] != '\0')
	{
		if (str[size] >= 65 && str[size] <= 90)
			size++;
		else if (str[size] >= 97 && str[size] <= 122)
			size++;
		else
			return (0);
	}
	return (1);
}
