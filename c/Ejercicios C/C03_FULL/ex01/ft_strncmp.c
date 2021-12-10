#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (n != 0)
	{
		if (*s1 != *s2++)
			return(*(unsigned char *)s1 - *(unsigned char *)(s2 - 1));
		if (*s1++ == '\0')
			break ;
		n--;
	}
	return (0);
}

int main()
{
	char s2[20] = "josejuan";
	char s1[20] = "josefaustino";
	int result;
	int a;

	result = ft_strncmp(s1, s2, result);
	printf("%d\n", result);
}
