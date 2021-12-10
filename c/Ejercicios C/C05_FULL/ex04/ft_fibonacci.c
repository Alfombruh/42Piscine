#include <stdio.h>

int ft_fibonacci(int index)
{
	int first;
	int second;
	int current;
	
	first = 0;
	second = 1;
	if(index == 0)
		return(0);
	if(index == 1)
		return(1);
	if (index < 0)
		return (-1);
	while (index >= 2)
	{
		current = first + second;
		first = second;
		second = current;
			index--;
	}
	return (second);
}

int main()
{
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(6));
	printf("%d\n", ft_fibonacci(7));
	printf("%d\n", ft_fibonacci(8));
	printf("%d\n", ft_fibonacci(9));
	printf("%d\n", ft_fibonacci(10));
	printf("%d\n", ft_fibonacci(11));
	return (0);
}
