#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array.
 *
 * @nmemb: numero de elementos
 *
 * @size: tamano de cadaelemnto
 *
 * Return: devuelve strarray
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *strArray;
	unsigned int counter;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	strArray = malloc(nmemb * size);

	if (strArray == NULL)
	{
		return (NULL);
	}
	counter = 0;

	while (counter < (nmemb * size))
	{
		strArray[counter] = 0;
		counter++;
	}
	return (strArray);
}
