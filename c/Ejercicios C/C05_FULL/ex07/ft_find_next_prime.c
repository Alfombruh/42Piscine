#include <stdio.h>

int	prime(unsigned int i, unsigned int j)
{
	if (i % j == 0)
		return (0);
	if (j * j > i)
		return (1);
	return (prime(i, j + 1));
}

int ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	return (prime(nb, 2));
}

int ft_find_next_prime(int nb)
{
	unsigned int	j;
	int				not_prime;


	j = nb;
	not_prime = 1;
	while (not_prime)
	{
		if (ft_is_prime(j))
			return (j);
		j++;
	}
	return (0);
}

int main()
{
	printf("%d\n", ft_find_next_prime(9));
	return (0);
}
