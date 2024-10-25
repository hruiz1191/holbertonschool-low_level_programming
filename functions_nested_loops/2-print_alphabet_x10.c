#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet
 *
 * Return: alphabet in 10 lines.
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
