#include "errmng.h"

int		ft_comb_check(char *argv)
{
	int count;
	
	count = 0;
	while (count <= 4)
	{
		if (*(argv + count) == 1 && *(argv + 4 + count) == 1)
				return (0);
		if (*(argv + count) == 2 && *(argv + 4 + count) == 4)
				return (0);
		if ((*(argv + count) == 3 && *(argv + 4 + count) == 3) || *(argv + 4 + count) == 4)
				return (0);
		if (*(argv + count) == 4 && *(argv + 4 + count) != 1)
				return (0);
		++count;
	}
	count = 9;
	while (count <= 12)
	{
		if (*(argv + count) == 1 && *(argv + 4 + count) == 1)
				return (0);
		if (*(argv + count) == 2 && *(argv + 4 + count) == 4)
				return (0);
		if ((*(argv + count) == 3 && *(argv + 4 + count) == 3) || *(argv + 4 + count) == 4)
				return (0);
		if (*(argv + count) == 4 && *(argv + 4 + count) != 1)
				return (0);
		++count;
	}
	return (1);
}
/* Le entra el string de 16 caracteres previamente filtrado para ver si las combinaciones son posibles.
 * Este empieza a contar el caracter 0 y el 0+4, hasta el 4-8 que es donde salimos del dominio de las columnas y pasamos a las filas.
 * Como ahora estamos en las filas y el primer dato de la fila es en el 9 dato del string empezamos a contar en el 9 hasta el 12. Al igual que en anterior caso comparamos el 9 con el 9+4, es decir el mismo caractar con un desfase de 4.
 * Como tal solo puede conmutar ciertos numeros entre si:
 * 1---->2,3,4
 * 2---->1,2,3
 * 3---->1,2
 * 4---->1
 * Estas posibilidades estan dentro de los while */
