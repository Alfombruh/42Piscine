#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int count;
	int first;
	int second;

	count = 0;
	while (count < size)
	{
		first = *(tab + count);
		second = *(tab + 1 + count);
	
 		if (first <= second)
		{
		first = *(tab + count);
		second = *(tab + 1 + count);
		++count;
		}
		if (first > second)
		{
			*(tab + count) = second;
			*(tab + 1 + count) = first;
			count = 0;         
		}
	}
}

int main()
{
	int tabla [9] = {0, 1, 3, 2, 9, 7, 2, 8, 5};
	int x;

	x = 0;

	ft_sort_int_tab(tabla, 9);
	while (x < 9)
	{
	printf("%d", *(tabla + x));
	++x;
	}
	return (0);
}
