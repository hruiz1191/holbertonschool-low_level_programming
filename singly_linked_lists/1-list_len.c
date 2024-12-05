#include"lists.h"
/**
 * list_len - devielve la cantidad de elememtos en la lista
 * @h: numero de nodos
 * Return: devuelve numero de elementos
 **/

size_t list_len(const list_t *h)
{
	size_t elements;

	for (elements = 0; h; elements++)
		h = h->next;
	return (elements);
}

