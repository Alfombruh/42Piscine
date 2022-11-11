#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;

}

int main()
{
	int a;
	int b;
	
	a = 84;
	b = 42;

	ft_swap(&a, &b);
	printf("%d\n%d\n",a , b);
	return (0);
}
