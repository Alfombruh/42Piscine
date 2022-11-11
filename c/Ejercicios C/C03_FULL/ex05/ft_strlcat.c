#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	 chars;

	chars = 0;
	while (str[chars] != '\0')
	{
		chars++;
	}
	return (chars);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	char *d;
	char *s;
	unsigned int n;
	unsigned int dlen;

	d = dest;
	s = src;
	n = size; 
	while ( n-- != 0 && *d != '\0')
		d++;
	dlen = (d - dest);
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}

int main()
{
	char s1[20] = "asd";
	char s2[20] = "asadas";
	unsigned int i;
	unsigned int j;

	i = 5;
	j = ft_strlcat(s1, s2, i);
	printf("%d\n", j);
	return (0);
}
