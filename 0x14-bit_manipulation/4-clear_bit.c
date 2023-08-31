#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the pointer of the unsigned long int
 * @index: the index of the bit
 * Return: 1 for success, and -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)

{

	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;

	if (*n & a)
		*n ^= a;
	return (1);
}
