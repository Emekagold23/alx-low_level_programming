#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, and 1 if little endian
 */

int get_endianness(void)

{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *) &i;
	return (*c);
}
