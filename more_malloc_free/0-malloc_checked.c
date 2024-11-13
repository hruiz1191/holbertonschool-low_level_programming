#include "main.h"
#include <stdio.h>
#include <stdlib.h>
 /**
  * malloc_checked - verifica si se aloja la memoria
  * @b: cantdad de memoria
  * Return: devuelve 98
  **/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p  == NULL)
	exit(98);
return (p);
}
