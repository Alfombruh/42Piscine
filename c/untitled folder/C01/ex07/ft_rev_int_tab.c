#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int first;
	int last;
	int count;
	
	count = 0;
	while (count < (size/2))
	{
		first = *(tab + count);
		last = *(tab + size - 1 - count);
		*(tab + count) = last;
		*(tab + size -1 -count) = first;
		++count;
	}	
}
int		main()
{
	int tabla [9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	int x;

	x = 0;

	ft_rev_int_tab(tabla, 9);
	while (x < 9)
	{
	printf("%d", *(tabla + x));
	++x;
	}
	return (0);
}
