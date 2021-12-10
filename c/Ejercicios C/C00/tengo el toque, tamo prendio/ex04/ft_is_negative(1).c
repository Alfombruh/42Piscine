#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n < 0)
	{
		c = 'N';
		write(1, &c, 1);
	}
	if (n >= 0)
	{
		c = 'P';
		write(1, &c, 1);
	}
}
