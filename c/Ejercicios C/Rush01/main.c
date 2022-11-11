#include <stdio.h>

int		**ft_init_dimension(int dimension1, int dimension2);
void 	ft_main_table(int tab[6][6]);
void	ft_inner_table(int tab[6][6]);
void	ft_putchar(char c);

int main()
{
	int **tab;

	tab = ft_init_dimension(6, 6);
	ft_main_table(tab);
	ft_inner_table(tab);
	return (0);
}
