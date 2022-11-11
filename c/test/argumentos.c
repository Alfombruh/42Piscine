#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	printf("Nombre de argumentos: %d\n", argc);
	printf("Valor del argumentos: %s\n", argv[1]);

	char *str = argv[1];
	printf("%s\n", str);
	return (0);
}
