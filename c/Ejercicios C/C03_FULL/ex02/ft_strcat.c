#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	char *count;
	char *temp;
	
	count = dest;
	temp = src;
	while (*count)
		count++;
	while (*temp)
	{
		*count = *temp;
		count++;
		temp++;
	}
	*count = 0;
	return (dest);
}

int main()
{
	char s1[20] = "ac";
	char s2[20] = "ab";
	char *c;

	c = ft_strcat(s1, s2);
	printf("%s\n", c);
	return (0);
}
