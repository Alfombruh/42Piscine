#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	lett;

	lett = 97;
	while (lett <= 122)
	{
		write(1, &lett, 1);
		lett++;
	}
}
