#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	special_characters(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char	fst;
	char	sec;
	char	thr;

	fst = '0' - 1;
	while (++fst <= '7')
	{
		sec = fst;
		while (++sec <= '8')
		{
			thr = sec + 1;
			while (thr <= '9')
			{
				ft_putchar(fst);
				ft_putchar(sec);
				ft_putchar(thr);
				if (fst == '7')
				{
					return ;
				}
				special_characters();
				thr ++;
			}
		}
	}
}
