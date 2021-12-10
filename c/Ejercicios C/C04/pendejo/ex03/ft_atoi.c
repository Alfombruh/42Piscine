#include <stdio.h>

int	ft_atoi(char *str)
{	
	int	count;
	int	sing;

	count = 0;
	sing = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	{
		++str;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sing *= -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		count *= 10;
		count += (int)(*str - '0');
		++str;
	}
	return (count * sing);
}
