#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	unsigned int	len;
	char			*ptr;

	ptr = str;
	len = 0;
	while (*ptr++ != '\0')
	{
		len++;
	}
	return (len);
}

int	ft_valid_base(char *str)
{
	int		i;
	int		j;
	char	*curr;

	curr = str;
	if (str == 0 || ft_strlen(str) <= 1)
		return (0);
	while (*curr)
	{
		if (*curr == '\t' || *curr == '\n' || *curr == '\v' || *curr == '\f'
			|| *curr == '\r' || *curr == ' ' || *curr == '+' || *curr == '-')
			return (0);
		curr++;
	}
	i = 0;
	while (i < curr - str)
	{
		j = i + 1;
		while (j < curr - str)
			if (str[i] == str[j++])
				return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base_recursive(int number, char *base, int leng)
{
	if (number == -2147483648)
	{
		ft_putnbr_base_recursive(number / leng, base, leng);
		ft_putchar(base[-(number % leng)]);
		return ;
	}
	if (number < 0)
	{
		ft_putchar('-');
		ft_putnbr_base_recursive(-number, base, leng);
		return ;
	}
	if (number > leng - 1)
		ft_putnbr_base_recursive(number / leng, base, leng);
	ft_putchar(base[number % leng]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	leng;

	if (!ft_valid_base(base))
		return ;
	leng = ft_strlen(base);
	ft_putnbr_base_recursive(nbr, base, leng);
}
