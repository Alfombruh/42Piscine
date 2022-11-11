#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		size;

	size = 0;
	while (*(src + size) != '\0')
	{
		*(dest + size) = *(src + size);
		++size;
	}
	dest[size] = '\0';
	return (dest);
}
