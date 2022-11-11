#include "bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int		num;
	int		negative;
	char	*dest;

	num = 0;
	negative = 1;
	dest = str;
	while (*dest == ' ' || (*dest >= 9 && *dest <=13))
		dest++;
	while (*dest == '-' || *dest == '+')
	{
		if (*dest == '-')
			negative *= -1;
		dest++;
	}
	while (*dest >= '0' && *dest <= '9')
	{
		num *= 10;
		num += (int)(*dest - '0');
		dest++;
	}
	return (num * negative);
}
