#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - inicializa la estructura dog
 * @d: puntero  inicial
 * @name: nombre del perro
 * @age: edad del perro
 * @owner: dueno del perro
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
