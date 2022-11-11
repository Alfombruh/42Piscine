#include "bsq.h"
//buscar donde se pueden poner fill
void    search_placemarks(int big_square, t_info *info)
{
    int i;
    int j;

    i = 0;
    while (i < big_square)
    {
        j = 0;
        while (j < big_square)
        {
            info->board[info->y + i][info->x + j] = info->fill;
            j++;
        }
        i++;
    }
}

void    print_info(t_info *info)
{
    int i;
    int j;

    i = 1;
    while (i < info->count_y)
    {
        j = 0;
        while (j < info->count_x)
        {
            ft_putstr(&info->board[i][j]);
            j++;
        }
        i++;
    }
    i = 0;
    while (i < info->count_y)
    {
        free(info->board);
        i++;
    }
    free(info->board);
    }
//check cuadarado
int    check_square(int size, int a, int b, t_info *info)
{
    int i;
    int j;

    i = 0;
    while (i < size && i + a < info->count_x)
    {
        j = 0;
        while (j < size && i + b < info->count_y)
        {
            if (info->board[b + j][a + i] != info->empty)
                return(0);
            j++;
        }
        i++;
    }
    if (i == size && j == size)
        return (1);
    else
        return (0);
}
//poner los cuadrados
void    place_square(int a, int b,int *big_square, t_info *info)
{
    int size;

    size = 1;
    while (check_square(size, a, b, info))
        size++;
    size--;
    if (size > *big_square)
    {
        *big_square = size;
        info->x = a;
        info->y = b;
    }
}
//juntar todo y poner solo el cuadrado
void    make_square(t_info *info)
{
    int a;
    int b;
    int big_square;

    b = 1;
    info->x = 0;
    info->y = 0;
    big_square = 0;
    while (b + big_square < info->count_y)
    {
        a = 0;
        while (a + big_square < info->count_x)
        {
            place_square(a, b, &big_square, info);
            a++;
        }
        b++;
    }
    search_placemarks(big_square, info);
    print_info(info);
}
