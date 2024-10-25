#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: This function prints 10 lines.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter;
	int line = 0;

	while (line <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
	line++;
	}
}
