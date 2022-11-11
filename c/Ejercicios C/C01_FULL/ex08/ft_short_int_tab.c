#include <stdio.h>

void	ft_sort_int_tab(int *tab. int size)
{
	int count;
	int first;
	int second;

	count = 0;
	while (count < size)
	{
		first = *(tab + count);
		second = *(tab + 1 + count);
		++count;

		if (first > second)
		{
			*(tab + count) = first;
			*(tab + 1 + count) = second;
			count = 0;
			return 0;
		}
	}
}

int main()
{
	ubt tabla [9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	int x;

	x = 0;

	ft_sort_int_tab(tabla, 9);
	while (x < 9)
	{
	printf("%d", *(tabla + x))
	++x;
	}
	return (0);
}
