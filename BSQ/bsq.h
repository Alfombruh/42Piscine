#ifndef BSQ_H
# define BSQ_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_info 
{
	int		x;
	int		y;
	char	*file;
	char	empty;
	char	obstacles;
	char	fill;
	char	**board;
	unsigned int 	count_x;
	unsigned int 	count_y;
}			t_info;

int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_error(char *error);
void	validate_table(t_info *info);
void    make_square(t_info *info);
int		ft_check_arguments(int argc, char **argv, t_info *info);

#endif
