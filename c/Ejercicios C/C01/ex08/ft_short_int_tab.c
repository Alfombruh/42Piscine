#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		count;
	int		first;
	int		second;

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
