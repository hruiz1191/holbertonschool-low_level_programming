#include "main.h"
/**
 * _islower - identifica si la letra c es minuscula
 *
 * @c: Variable que se va a comparar
 *
 * Return: devuelve 1 si es minuscula 0 si es otra letra
 */
int _islower(int c)
{
	if ((c >= 99) && (c <= 122))
		return (1);
	return (0);
}
