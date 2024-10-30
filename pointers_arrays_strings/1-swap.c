#include "main.h"

/**
 * swap_int - intercambia los valores de las variables
 *
 * @a: primer valor entrado
 * @b: segundo valor entrado
 *
 **/
void swap_int(int *a, int *b)
{
	int temp;

	 temp = *a;
	 *a = *b;
	 *b = temp;
}

