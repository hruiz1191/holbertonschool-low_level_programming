#include <stdio.h>
/**
 * main - imprime los argumentos
 * @argc: contador
 * @argv: posicion
 * Return: Devuelve 0
 **/
int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
