#include "main.h"
/**
 * reverse_array - coloca lreves el orden de un array
 * @a: array
 * @n: numero de caracteres en el arreglo
 */

void reverse_array(int *a, int n)
{

	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
