#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - copia 2 punteros en 1
 * @s1: puntero fuente 1
 * @s2: puntero fuente 2
 * Return:devuelve un puntero con la informacion de los 2 punteros
 **/

char *str_concat(char *s1, char *s2)
{
	char *concat_str;

	int index, concat_index,  len;

	concat_index = 0;
	len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat_str[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s2[index];

	return (concat_str);
}
