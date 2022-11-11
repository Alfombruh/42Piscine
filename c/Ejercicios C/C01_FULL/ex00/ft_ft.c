#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int a;

	a = 231;
	ft_ft(&a);
	printf("%d\n", a);
	return (0);
}
