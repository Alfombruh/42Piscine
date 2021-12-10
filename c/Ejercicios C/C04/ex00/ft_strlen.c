#include <stdio.h>

int	ft_strlen(char *str)
{
	int	chars;

	chars = 0;
	while (str[chars] != '\0')
	{
		chars++;
	}
	return (chars);
}
