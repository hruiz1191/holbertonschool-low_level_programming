#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char num;
	char min;

	for ( num = '0'; num <= '9'; num++)
		putchar(num);
	for ( min = 'a'; min <= 'f'; min++)
		putchar(min);
	putchar ('\n');
	return (0);
}
