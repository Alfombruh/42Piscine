#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_print(char c)
{
	return (c >= ' ' && c != 127);
}

void	ft_putstr_non_printeable(char *str)
{
	unsigned int	count;
	unsigned int	current;

	count = 0;
	current = str[count];
	while (current != '\0')
	{
		current = str[count];
		if (current == '\0')
			break ;
		if (ft_is_print(current))
			ft_putchar(current);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abdcef"[current / 16]);
			ft_putchar("0123456789abdcef"[current % 16]);
		}
		++count;
	}
}
