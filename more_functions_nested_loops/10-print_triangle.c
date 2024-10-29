#include "main.h"
/**
 * print_triangle:- imprime un triangulo
 *
 * @size: el tamano del triangulo
 **/
void print_triangle(int size)
{
	int numlinea;
	int espacio;
	int simbolo;

		if (size <= 0)
		_putchar('\n');
		else
		{
		for (numlinea = 1; numlinea <= size; numlinea++)
		{
			for (espacio = 1; espacio  <= (size - numlinea); espacio++)
			{
				_putchar(32);
			}
			for (simbolo = 1; simbolo <= numlinea; simbolo++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
}


