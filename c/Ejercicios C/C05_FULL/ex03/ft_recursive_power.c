#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power-- > 0)
		return (nb * ft_recursive_power(nb, power));
	return (nb);
}

int main()
{
	printf("%d\n", ft_recursive_power(-1, 3));
	return (0);
}
