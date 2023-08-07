#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0 - success
 */

int main(int argc, char *argv[])

{
	int i, n, add = 0;

		for (i = 1; i < argc; i++)
		{
			for (n = 0; argv[i][n] != '\0'; n++)
			{
				if (!isdigit(argv[i][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
			return (0);
}
