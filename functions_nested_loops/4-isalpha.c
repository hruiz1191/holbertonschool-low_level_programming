#include "main.h"
/**
 * _isalpha - identifica si la letra c es minuscula
 *
 * @c: Variable que se va a comparar
 *
 * Return: devuelve 1 si es letra  0 si es otro caracter
 */
int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		return (1);
	return (0);
}
