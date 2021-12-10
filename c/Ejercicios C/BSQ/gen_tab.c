#include "bsq.h"

void    ft_table_size(t_info *info) 
{
    int             fd;
    char            c;
    unsigned int    i;
    unsigned int    j;

    i = 0;
    fd = open(info->file, O_RDONLY);
    while (read(fd, &c, 1) && c != '\n')
        i++;
    j = 0;
    i = 0;
    while(read(fd, &c, 1))
    {
        if (c != '\n' && j == 0 )
            i++;
        if (c == '\n' && c != ' ') 
            j++;       
    }
    info->x = i + 1;
    info->y = j;
    close(fd);
    printf("\n||The number of columns is: %d||\n||The number of rows is: %d||\n", i, j);
}

int ft_check_arguments(int argc, char **argv, t_info *info)
{
    char               c;
    unsigned int       j;
    unsigned int       i;
    int               fd;

    if(argc >= 2)
    {
        ft_table_size(info);
        info->board = malloc(info->x * sizeof(char));
        i = 0;
        while (i < info->x)
        {                                                                                                      
            info->board[i] = malloc(info->y * sizeof(char));
            i++;
        }
        i = 0;
        fd = open(argv[1], O_RDONLY);
        while (read(fd, &c, 1) && c != '\n')
            i++;
            printf("\n||The amount of charcters in the legend row is: %d||\n", i);
        if(fd != -1)
        {
            i = 0;
            j = 0;
            while(read(fd, &c, sizeof(c)))
            {
                info->board[i][j] = c;
                write(1, &info->board[i][j], 1);
                if(c == '\n')
                {
                    i = 0;
                    j++;
                }
                else
                {
                    i++;
                }
                //printf("\n\n//The puzzle to solve is//\n%s\n", *info->board);
               //printf("%d, ",j);
            }
        }
        else
            return (1);
        close(fd);
        //printf("\n\n//The puzzle to solve is//\n%s\n", *info->board);
        free(*info->board);
        free(info->board);
    }
    return(0);
}

int main(int argc, char **argv)
{
    t_info info;

    info.file = "standard.map";
    ft_check_arguments(argc, argv, &info);
    return(0);
}
