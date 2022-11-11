#include "errmng.h"

int	ft_odd_err(char *argv)
{
	int	i;

	i = 0;
	while (i < 31)
	{
		if (i % 2 == 1)
		{
			if (argv[i] != ' ')
			{
				return (1);
				break ;
			}
		}
		i++;
	}
	return (0);
}
