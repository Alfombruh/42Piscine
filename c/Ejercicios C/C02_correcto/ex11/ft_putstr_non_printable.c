#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

void	hex(char c)
{
	char	hex1;
	char	hex2;
	int		count;

	ft_putchar('\\');
	if (c < 0)
	{
		count = (-128 - (c)) * -1 + 128;
		hex1 = count / 16;
		hex2 = count % 16;
	}
	else
	{
		hex1 = c / 16;
		hex2 = c % 16;
	}
	if (hex1 < 10)
		ft_putchar(hex1 + '0');
	else
		ft_putchar(hex1 + 87);
	if (hex2 < 10)
		ft_putchar(hex2 + '0');
	else
		ft_putchar(hex2 + 87);
}

void	ft_putstr_non_printable(char *str)
{
	char	*c;

	c = str;
	while (*c != 0)
	{
		if (*c <= 31 || *c == 127)
			hex(*c);
		else
			write(1, c, 1);
		c++;
	}
}
