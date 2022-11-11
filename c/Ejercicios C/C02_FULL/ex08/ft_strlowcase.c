#include <stdio.h>

int		ft_strlowcase(char *str)
{
	int size;

	size = 0; 

	while (str[size] != '\0')
	{
		if(str[size] >= 65 && str[size] <= 97)
		{
			str[size] = str[size] + 32;
			++size;
		}
		else
		{
			++size;
		}
	}
	return (*str);
}

int main()
{
	char strl [] = "1Ll0 JuAN dIcE S3X0";
	unsigned int i;
    printf("%s\n", strl);
	ft_strlowcase(strl);
	printf("%s\n", strl);
}
