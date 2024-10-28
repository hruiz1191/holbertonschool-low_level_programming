#include "main.h"
/**
 * _isupper- Se comple si la letra es mayuscula
 *
 * @c: valor de letra
 *
 * Return: devuelve 1 si es mayuscula y 0 si es minuscula
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	return (0);
}

