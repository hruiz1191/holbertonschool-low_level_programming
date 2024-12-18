#include "main.h"

/**
 * 1-main.c - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 *
 */
void print_alphabet(void)
{
	char letter;
		for ( letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	_putchar('\n');
}
