#include <stdio.h>

void ft_ft(int *nbr);

int		main(void)
{
	int a;

	a = 0;
	ft_ft(&a); 
	printf("%d\n", a);
	return 0;
}
