#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	base;

	base = nb;
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= base;
		power--;
	}
	while (power < -1)
	{
		nb *= base;
		nb = 1 / base;
		power++;
	}
	return (nb);
}
