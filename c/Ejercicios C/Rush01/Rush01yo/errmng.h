
#ifndef _ERRMNG
#define _ERRMNG

void ft_err(int argc, char *argv);
int ft_param_err(int argc);
int ft_length_err(char *argv);
int ft_odd_err(char *argv);
int ft_even_err(char *argv);
int	ft_comb_check(char *argv);

#include "ft_err.c"
#include "ft_param_err.c"
#include "ft_length_err.c"
#include "ft_odd_err.c"
#include "ft_even_err.c"
#include "comb_check.c"

#endif
