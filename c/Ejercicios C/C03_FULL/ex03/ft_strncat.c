#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *count;
	char *temp;
	unsigned int lim;
		
	lim = 0;
	count = dest;
	temp = src;
	while (*count)
		count++;
	while (*temp && lim < nb)
	{
		*count = *temp;
		count++;
		temp++;
		lim++;
	}
	*count = 0;
	return (dest);
}

int main()
{
	char s1[20] = "ac";
	char s2[20] = "abocadillo";
	char *c;
	unsigned int i;

	i = 4;
	c = ft_strncat(s1, s2, i);
	printf("%s\n", c);
	return (0);
}
