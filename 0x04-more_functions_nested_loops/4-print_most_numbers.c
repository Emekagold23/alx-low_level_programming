#include "main.h"

/**
 * print_most_numbers - Print the numbers 0 up to 9
 * Description: Print the numbers excluding 2 and 4
 * Return: The numbers 0 up to 9
 */

void print_most_numbers(void)

{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || c == '4'))
	_putchar(c);
	}
	_putchar('\n');
}
