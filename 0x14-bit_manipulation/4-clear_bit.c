#include "main.h"

/** clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the pointer of the unsigned long int
 * @index: the index of the bit
 * return: 1 for success, and -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
