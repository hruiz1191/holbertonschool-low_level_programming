#include "main.h"
/**
 * _pow_recursion - devuelve x elevado a y
 * @x: numero
 * @y: potencia
 * Return: resultado
 **/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
