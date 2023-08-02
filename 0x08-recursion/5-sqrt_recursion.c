#include "main.h"
#include <stdio.h>

/**
 * _sqrt - calculates natural square root
 * @n: number to calculate the square root
 * @i: iterates number
 *
 * Return: natural square root
 */

int _sqrt(int n, int i)

{
	int sqrt = i x i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
