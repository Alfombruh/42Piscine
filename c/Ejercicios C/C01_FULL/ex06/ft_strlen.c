#include <stdio.h>

int		ft_strlen(char *str)
{
	int chars;

	chars = 0;
	while (str[chars] != '\0')
	{
		chars++;
	}
		return (chars);
}

int main()
{
	int tot = ft_strlen("quepasa aqui estamos");
	printf("%d\n", tot);
	return (0);
}
