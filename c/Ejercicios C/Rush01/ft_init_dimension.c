#include <stdlib.h>

int		**ft_init_dimension(int dimension1, int dimension2)
{
	int		x;
	int		y;
	int		**tab;

	x = 0;
	y = 0;
	tab = malloc(sizeof (int *) * dimension1);
	while(x != dimension1)
	{
		tab [x] = malloc(sizeof (int) *dimension2);
		++x;
	}/*
	x = 0;
	while (x != dimension1)
	{
			while (y != dimension2)
			{
				tab[x][y] = 0;
				++y;
			}
			++x;
	}*/
	return (tab);
}
