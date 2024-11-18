#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - imprime el nombre
 * @name: nombre a imprimir
 * @f: nombre de function pointer
 */

void print_name (char *name, void(*f)(char *))
{

f(name);

}

