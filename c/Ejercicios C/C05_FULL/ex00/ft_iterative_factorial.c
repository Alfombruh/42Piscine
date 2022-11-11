#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int ret;
	
	ret = nb;

	while (nb != 0)
	{
		while (nb > 1)
		{
			--nb;
			ret *= nb;
		}
		while (nb < -1)
		{
			nb++;
			ret *=- nb;
		}
		return (ret);
	}
	return (0);
}

int main ()
{
	int i;

	i = ft_iterative_factorial(0);
	printf("%d\n", i);
	return (0);
}
