#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int	i;
	unsigned int	nbc;
	unsigned int	sqrt;

	i = 0;
	nbc = nb;
	if (nbc < 0)
		return (0);
	while (i * i < nbc)
	{
		sqrt = i + 1;
		i++;
	}
	if (nbc % sqrt == 0 && nbc == sqrt * sqrt)
		return (sqrt);
	return (0);
}
