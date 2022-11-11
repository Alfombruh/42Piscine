#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int size;
	size = 0;

	while (*(src + size) != '\0' && size < n)
	{
		*(dest + size) = *(src + size);
		++size;
	}
	dest[size] = '\0';
	return (dest);
}

int main()
{
	char strn00 [] = "webos para cenar";
	char strn01 [] = "hoy senamos comida";
	unsigned int i = 0;

	printf("%s\n%s\n", strn00, strn01);
	/*strncy*/
	ft_strncpy(strn00, strn01, i);
	printf("%s\n%s\n", strn00, strn01);
	return (0);
}
