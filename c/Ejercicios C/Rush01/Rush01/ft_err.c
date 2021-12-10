#include <unistd.h>
#include "errmng.h"

int	ft_param_err(int argc);
int	ft_length_err(char *argv);
int	ft_odd_err(char *argv);
int	ft_even_err(char *argv);
int	ft_comb_check(char *argv);

void	ft_err(int argc, char *argv)
{
	if (ft_param_err(argc) == 1)
		write(1, " error de parametro ", 19);
	else if (ft_length_err(argv) == 1)
		write(1, " error de valores ", 17);
	else if (ft_odd_err(argv) == 1)
		write(1, " error de caracter sp ", 21);
	else if (ft_even_err(argv) == 1)
		write(1, " error de caracter num ", 22);
	else if (ft_comb_check(argv) == 0)
		write(1, " combinación incorrecta ", 25);
}
