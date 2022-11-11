#include <stdio.h>

char	*in_base(char *base, char *to_find)
{
	int	count;

	count = 0;
	while (base[count])
	{
		if (*to_find == base[count])
			return (base + count);
		count++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++ != '\0')
	{
		len++;
	}
	return (len);
}

int	error(char *base)
{
	int	count;

	if (*base == 0 || *(base + 1) == 0)
		return (0);
	while (*base)
	{
		if (*base == '-' || *base == '+' || *base <= 31)
			return (0);
		count = 1;
		while (*(base + count))
		{
			if (*(base + count) == *base)
				return (0);
			count++;
		}
		base++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	n;
	int				sing;

	n = 0;
	sing = 1;
	if (error(base))
	{
		while (*str == ' ' || (*str >= 9 && *str <= 13))
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sing *= -1;
			str++;
		}
		while (in_base(base, str))
		{
			n *= ft_strlen(base);
			n += (in_base(base, str) - base);
			str++;
		}
	}
	return (n * sing);
}
