#include "bsq.h"

void    ft_fill_table(t_info *info)
{
    int     x;
    int     y;
    char    c[1];
    int     fd;

    x = 0;
    fd = open(info->file, O_RDONLY);
    while (read(fd, c, 1) && *c != '\n')
        x++;
    x = 1;
    y = 1;
    while (read(fd, c, 1))
    {
        if (*c != '\n')
        {
            info->table[x][y] = *c;
            x++;
        }
        else
        {
            x = 1;
            y++;
        }
    }
    close(fd);
}

void    ft_build_table(t_info *info)
{
    int i;

    i = 0;
    info->table = malloc((info->x + 1) * sizeof(char *));
    while (i <= info->x)
        info->table[i++] = malloc((info->y + 1) * sizeof(char));
    ft_fill_table(info);
}