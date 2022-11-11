#include <stdio.h>

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
