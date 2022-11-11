#include <unistd.h>
#include "errmng.h"
#include "output.c"

int	main(int argc, char **argv)
{
	int tab[6][6];

	ft_err(argc, argv[1]);
	ft_write_table(tab);
	ft_putchar('\n');
	return (0);
}
