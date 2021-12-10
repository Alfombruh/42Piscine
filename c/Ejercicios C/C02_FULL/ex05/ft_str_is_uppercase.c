#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int size;

	size = 0; 

	while (str[size] != '\0')
	{
		if (str[size] >=  48 && str[size] <= 57)
			size++;
		else
			return (0);
	}
	return (1);
}

int main()
{
	char strl [] = "sicuenta";
	char strn [] = "358979323846";
	int i;
    printf("%s\n", strl);
	i = ft_str_is_uppercase(strl);
	printf("%d\n", i);
}