#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	while (nb < 0)
		return (0);
	while (nb)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}
