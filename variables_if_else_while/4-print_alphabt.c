#include <stdio.h>

/**
 *main -Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if ((letter == 'q') || (letter == 'e'))
			letter++;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
