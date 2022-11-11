#include <unistd.h>

void	ft_putstr(char *str)
{
	int		size;

	size = 0;
	while (str[size] != '\0')
	{
		write(1, &str[size], 1);
		++size;
	}
}
