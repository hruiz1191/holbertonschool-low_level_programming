#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - imprime los numeros
 * @separator: espacio entre  numero
 * @n: enteros pasados a funcion
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list args;
	int print_numbers;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		print_numbers = va_arg(args, int);
		printf("%d", print_numbers);

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
