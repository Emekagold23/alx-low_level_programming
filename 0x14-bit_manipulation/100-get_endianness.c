#include "main.h"

/**
 * get_endianness - function that checks if a system is little or big endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)

{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
