#include <stdio.h>

int	ft_str_is_uppercase(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 65 && str[count] <= 90)
		{
			count++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
