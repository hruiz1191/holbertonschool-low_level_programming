#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - suma de 2 diagonales.
 * @a: source
 * @size: tamano de la matriz
 *
 * Return: suma diagnal.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1;
	int sum2;
	int step1;
	int step2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i <= (size - 1); i++)
	{
		step1 =  (size + 1) * i;
		sum1 = sum1 + *(a + step1);
	}

	for (j = 1; j <= size; j++)
	{
		step2 = (size - 1) * j;
		sum2 = sum2 + *(a + step2);
	}
	printf("%d, %d\n", sum1, sum2);
}
