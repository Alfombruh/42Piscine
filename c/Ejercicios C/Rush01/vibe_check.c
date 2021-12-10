
int		ft_vibe_check(char *str)
{
	int count;
	
	count = 0;
	while (count <= 4)
	{
		if(*(str + count) == 1 && *(str + 4 + count) == 1)
				return (0);
		if(*(str + count) == 2 && (*(str + 4 + count) == 4)
				return (0);
		if(*(str + count) == 3 && *(str + 4 + count) == 3 || *(str + 4 + count) == 4)
				return (0);
		if(*(str + count) == 4 && *(str + 4 + count) != 1)
				return (0);
		++count;
	}
	while (count <=
	return (1);
}
/* Le entra el string de 16 caracteres previamente filtrado para ver si las combinaciones son posibles.
 * Este empieza a contar el carcter 0 y el 0+4, que es con el que se tiene que comparar
