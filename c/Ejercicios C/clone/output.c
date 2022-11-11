#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_table	(int tab[6][6])
{
	int i;
	int j;
	
	i = 0;
	while (i <= 5)
	{
		j = 0;
		while (j <= 5)
		{
			ft_putchar(tab[i][j]);
			if (j< 5)
				ft_putchar(' ');
			else ft_putchar('\n');
			j++;
		}
		i++;
	}
}
