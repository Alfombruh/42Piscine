#include <stdio.h>
#include <unistd.h>

void	ft_err(int argc, char *argv)
{
	int	i;
	int	c;

	if (argc != 2)
	{
		write(1, " error de parametro ", 19);
	}
	i =0;
	while (argv[i] != '\0')
		i++;
	if (i != 16)
	{
		write(1, " error de valores ", 17);
		c =0;
		while (argv[i] !='\0' && c == 0)
		{
			if (argv[i] < 1 || argv[i] > 4)
			{
				c =1;
				write(1, " error de caracter ", 18);
			}
			i++;
		}
	}
}
