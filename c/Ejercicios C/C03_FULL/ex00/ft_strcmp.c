#include <stdio.h>
#include <unistd.h>
#include <string.h> 

int		ft_strcmp(char *s1, char *s2)
{
	while(*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main()
{
	char *str1 = "josejuan" ;
	char *str2 = "mariajose2001" ;
	int i;
	int a;

	i = ft_strcmp(str1, str2);
	a = strcmp(str1, str2);
	printf("%d\n", i);
	printf("%d\n", a);
	return(0);
}
