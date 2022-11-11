#include "errmng.h"

int	ft_even_err(char *argv)
{
	int	i;

	i = 0;
	while (i < 31)
	{
		if (i % 2 == 0)
		{
			if (argv[i] < '1' || argv[i] > '4' || argv[i] == ' ')
			{
				return (1);
				break ;
			}
		}
		i++;
	}
	return (0);
}
