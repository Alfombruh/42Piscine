#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int count;
	int temp;

	if (*to_find == 0)
		return (str);
	count = 0;
	while (str[count] != '\0')
	{
		temp = 0;
		while (to_find[temp] == str[count + temp])
		{
			if (to_find[temp + 1] == '\0')
				return (str + count);
			temp++;
		}
		count++;
	}
	return (0);
}

int main()
{
	char s1[20] = "asdfa123asdfas";
	char s2[20] = "123";
	char *c;

	c = ft_strstr(s1, s2);
	printf("%s\n", c);
	return (0);
}
