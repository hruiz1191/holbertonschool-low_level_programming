#include "main.h"

void puts_half(char *str)
{
 int length_of_the_string;
 int n;
 int i;

 for (length_of_the_string = 0; str[length_of_the_string] != '\0'; length_of_the_string++)
 {}
	n = (length_of_the_string - 1) / 2;

for (i = n-1; i < length_of_the_string; i++)
	_putchar(str[i+1]);
_putchar('\n');

}
