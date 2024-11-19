#include "function_pointers.h"
/**
 * array_iterator - cuenta los valores del array
 * @array: arreglo entrado
 * @size: tamano del arreglo
 * @action: puntero q necesitamos usar
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i <= size; i++)
		(*action)(array[i]);
}
