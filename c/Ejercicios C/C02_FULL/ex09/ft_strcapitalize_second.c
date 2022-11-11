#include <stdio.h>
int	VS(char l)
{
	if(l >= 'A' && l <= 'Z')
	{
		return (1);
	}
	if(l >= 'a' && l <= 'z')
	{
		return (2);
	}
	if(l < 'A' && l > 'Z' && l < 'a' && l > 'z')
	{
		return (9);
	}
	if( l < '0' && l > '9')
	{
		return (5);
	}
	else
	{
		return(0);
	}
}


char	*ft_strcapitalize(char *str)
{
	int size;
	int bef;

	size = 0;
	bef = size - 1;
	while (str[size] != '\0')
	{
		if(VS(str[size]) - VS(str[bef]) == -7 )
		{
			str[size] = str[size] - 32;
			++size;
			++bef;
		}
		if(VS(str[size]) - VS(str[bef]) == 1)
		{
			str[size] = str[size] + 32;
			++size;
			++bef;
		}
	/*	if(VS(str[size]) - VS(str[bef]) == )
		{
			++size;
			++bef;
		}
		if(VS(str[size]) - VS(str[bef]) == )
		{
			++size;
			++bef;
		}*/
		++size;
		++bef;
	}
	return (str);
}

int main()
{
	char str[] = "leSSss g*oOO, i-jo el :eLb3b3";
	unsigned int i;

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}
