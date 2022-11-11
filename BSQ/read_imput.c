#include "myfunctions.h"

void read_imput(imput)
{
    int fd;
    char *tab;

    fd = open("standard.map",  O_RDONLY);
    if (fd < 0)
        printf("thats bad");
    else
    {
        read(fd, tab, 5);
    }
    printf("%s\n", tab);
}
/*
void gen_map(read imput result)
{

}*/