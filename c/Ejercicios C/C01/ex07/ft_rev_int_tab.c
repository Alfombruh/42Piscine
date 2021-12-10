#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		first;
	int		last;
	int		count;

	count = 0;
	while (count < (size / 2))
	{
		first = *(tab + count);
		last = *(tab + size - 1 - count);
		*(tab + count) = last;
		*(tab + size -1 -count) = first;
		++count;
	}	
}
