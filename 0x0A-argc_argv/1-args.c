#include <stdio.h>

/**
 * main - prints number of arguments passed into a program
 * @argc: argument count
 * @argv: array of argument
 * Return: always zero
 */

int main(int argc, char *argv[])

{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
