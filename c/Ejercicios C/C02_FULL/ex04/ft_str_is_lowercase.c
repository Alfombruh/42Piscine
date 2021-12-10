#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int size;

	size = 0; 

	while (str[size] != '\0')
	{
		if (str[size] >=  97 && str[size] <= 122)
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
	i = ft_str_is_lowercase(strl);
	printf("%d\n", i);
}