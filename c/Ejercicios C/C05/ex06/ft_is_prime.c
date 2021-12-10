#include <stdio.h>

int	prime(unsigned int num, unsigned int i)
{
	if (num % i == 0)
		return (0);
	if (i * i > num)
		return (1);
	return (prime(num, i + 1));
}

int	ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	return (prime(nb, 2));
}
