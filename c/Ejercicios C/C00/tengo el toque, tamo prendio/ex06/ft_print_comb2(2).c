#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_give_numbers(int fst, int sec, int t[])
{
	if (fst >= 10)
	{
		t[0] = fst / 10;
		t[1] = fst - 10 * t[0];
	}
	else
	{
		t[0] = 0;
		t[1] = fst;
	}
	if (sec >= 10)
	{
		t[2] = sec / 10;
		t[3] = sec - 10 * t[2];
	}
	else
	{
		t[2] = 0;
		t[3] = sec;
	}
}

void	ft_putchars(int fst, int sec)
{
	int	t[4];

	ft_give_numbers(fst, sec, t);
	ft_putchar(t[0] + 48);
	ft_putchar(t[1] + 48);
	ft_putchar(' ');
	ft_putchar(t[2] + 48);
	ft_putchar(t[3] + 48);
	if (fst != 98 || sec != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	fst;
	int	sec;

	fst = 0;
	while (fst <= 98)
	{
		sec = fst + 1;
		while (sec <= 99)
		{
			ft_putchars(fst, sec);
			sec++;
		}
		fst++;
	}
}
