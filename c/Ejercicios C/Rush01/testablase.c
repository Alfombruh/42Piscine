#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_main_table(int tab[6][6])
{
	int		i;
	int		j;
	
	i = 0;
	while (i <= 5)
	{
		j = 0;
		while (j <= 5)
		{
			ft_putchar(tab[i][j] + 48);
			if (j < 5)
					ft_putchar(' ');
			else ft_putchar('\n');
			j++;
		}	
		++i;
	}
}

void ft_inner_table(int tab[6][6])
{
	int i;
	int j;

	i = 1;
	while(i <= 4)
	{
			j = 1; 
			while(j <= 4)
	{
					ft_putchar(tab[i][j] + 48);
					if(j < 4)
							ft_putchar(' ');
					else ft_putchar('\n');
					++j;
			}
	}
}
