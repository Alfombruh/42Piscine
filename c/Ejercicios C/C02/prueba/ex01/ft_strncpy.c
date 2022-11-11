#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		size;

	size = 0;
	while (*(src + size) != '\0' && size < n)
	{
		*(dest + size) = *(src + size);
		++size;
	}
	dest[size] = '\0';
	return (dest);
}
