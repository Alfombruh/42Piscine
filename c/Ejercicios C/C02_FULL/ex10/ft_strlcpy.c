#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int count;
	unsigned int index;

	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	index = 0;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			++index;
		}
		dest[index] = '\0';
	}
	return (count);
}

int main()
{
	char str1[] = "Josejuan2021 Perro Sanxe fuera";
	char str2[] = "De Lunes a Domingo voy todo ciclado";
	
	printf("%s\n", str1);
	ft_strlcpy(str1, str2, 9);
	printf("%s\n", str1);
	return (0);
}
