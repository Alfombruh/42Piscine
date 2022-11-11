#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_casoespecifico(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_put_nbruhs(int	nb)
{
	if (nb == -2147483648)
	{
		ft_casoespecifico();
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb / 10)
	{
		ft_put_nbruhs(nb / 10);
	}
	ft_putchar('0' + nb % 10);
}

void	ft_putnbr(int nb)
{
	ft_put_nbruhs(nb);
	ft_putchar('\n');
}
