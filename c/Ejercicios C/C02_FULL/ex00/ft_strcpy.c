#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int size;
	size = 0;
	while (*(src + size)!= '\0')
	{
	*(dest + size) = *(src + size);
	++size;
	}
	dest[size] = '\0';
	return (dest);
}

int main()
{
	char dst [20] = ("webos para comer");
	char src [5] = ("12312"); 
	
	printf("%s\n%s\n", dst, src);
	ft_strcpy(dst, src);
	printf("%s\n%s\n", dst, src);
	return (0); 
}
