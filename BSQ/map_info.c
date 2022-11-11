#include "bsq.h"

void	map_info(t_info *info, int i, int x)
{
	char	*line_info;
	int		fd;

	if (i < 4)
		ft_putstr("Error");
	line_info = (char *)malloc(i * sizeof(char));
	fd = open(info->file, O_RDONLY);
	read(fd, line_info, i);
	close(fd);
	info->fill = line_info[--i];
	info->obstacles = line_info[--i];
	info->empty = line_info[--i];
	line_info[i] = 0;
	info->y = ft_atoi(line_info);
	free(line_info);
	info->x = x;
	if (info->fill == info->obstacles || info->fill == info->empty
		|| info->obstacles == info->empty)
		ft_putstr("Error");
}

void	get_info(t_info *info)
{
	int		i;
	int		x;
	int		fd;
	char	c[1];

	i = 0;
	x = 0;
	fd = open(info->file, O_RDONLY);
	while (read(fd, c, sizeof(char)) && *c != '\n')
		i++;
	while (read(fd, c, sizeof(char)) && *c != '\n')
		x++;
	close(fd);
	map_info(info, i, x);
}

void	validate_format(t_info *info)
{
	int		fd;
	int		x;
	int		eol;
	char	c[1];

	eol = -1;
	x = 0;
	fd = open(info->file, O_RDONLY);
	while (read(fd, c, sizeof(char)))
	{
		if (eol >= 0 && *c != '\n')
			x++;
		if (*c == '\n')
		{
			if (eol >= 0 && x != info->x)
				break ;
			eol++;
			x = 0;
		}
	}
	close(fd);
	if (eol != info->y)
		ft_putstr("Error");
}

void	validate_table(t_info *info)
{
	get_info(info);
	validate_format(info);
}
