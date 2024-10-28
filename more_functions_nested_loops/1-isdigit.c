#include "main.h"
/**
 * _isdigit- identifica si es un nmero del 0 al 9
 *
 * @c: valor del numero
 *
 * Return: devuelve 1 si es numero y 0 si es otro
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}

