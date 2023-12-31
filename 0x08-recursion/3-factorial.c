#include "main.h"

/**
 * factorial - calculate the factorial of a number
 * @n: the num,ber to calculate the factorial
 *
 * Return: int value
 */

int factorial(int n)

{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
