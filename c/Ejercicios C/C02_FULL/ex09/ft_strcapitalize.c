#include <stdio.h>

int		comp(char c)
{
	if (c < '0')
			return (0);
	else if (c > '9' && c < 'A')
			return (0);
	else if ((c > 'Z' && c < 'a') || (c > 'z'))
			return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char *count;

	count = str;
	while (*count)
	{
		if (count == str)
		{
			if (*count <= 'z' && *count >= 'a')
					*count -= 32;
		}
		else  if (comp(*(count - 1)) == 0)
		{
			if (*count <= 'z' && *count >= 'a')
					*count -= 32;
		}
		else if ((*count >= 'A') && (*count <= 'Z'))
		{
				*count += 32;
		}
		++count;
	}
	return (str);
}

int main()
{
	char str[] = "42uRduliz :illoju4nCh0 !Quabo";
	unsigned int i;
	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
}
