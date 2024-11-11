#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - crea un arreglo con la misma letra
 * @size: tamano deseado de espacio
 * @c: letra a colocar en el array
 * Return: return 0
 **/

char *create_array(unsigned int size, char c)
{
	char *ac;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ac = malloc(size * sizeof(*ac));
	if (ac == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		ac[i] = c;
	return (ac);
}

