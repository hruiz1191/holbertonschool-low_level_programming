#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

#include <stdio.h>
#include <stddef.h>

int _putchar(char c);

void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
