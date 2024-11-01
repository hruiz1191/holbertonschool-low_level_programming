#include <stdio.h>
#include "main.h"
/**
 * print_array - imprime un arreglo
 *
 * @a: arreglo
 * @n: numero de elementos en el arreglo
 **/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
	printf("%d, ", a[i]);
	}
		if (i == (n - 1))
			printf("%d", a[i]);
printf("\n");
}
