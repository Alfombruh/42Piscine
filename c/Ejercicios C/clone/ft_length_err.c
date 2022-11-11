#include "errmng.h"

int	ft_length_err(char *argv)
{
	int	length;

	length = 0;
	while (argv[length] != '\0')
	{
		length++;
	}
	if (length != 31)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
