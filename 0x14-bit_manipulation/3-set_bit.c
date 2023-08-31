#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: the pointer to the number to set
 * @index: the index of the bit to set
 * Return: 1 if success, and -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	unsigned int a;

	if (index > 63)
		return (-1);
	a = 1 << index;
	*n = (*n | a);
	return (1);
}
