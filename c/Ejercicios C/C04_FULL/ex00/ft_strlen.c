#include <stdio.h>

int	ft_strlen(char *str)
{
	int	chars;

	chars = 0;
	while (str[chars] != '\0')
	{
		chars++;
	}
	return (chars);
}

int main()
{
	char str[] = "josejuan";
	int i;

	i = ft_strlen(str);
	printf("%d\n", i);
	return (0);
}
