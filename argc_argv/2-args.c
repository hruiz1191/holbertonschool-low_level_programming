#include <stdio.h>
/**
 * main - imprime los argumentos
 * @argc: cantidad
 * @argv: source array
 * Return: devuelve 0
 **/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc - 1; i++)
		printf("%s\n", argv[i]);
	return (0);
}
