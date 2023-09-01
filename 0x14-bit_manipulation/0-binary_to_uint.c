#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the pointer to the string containing the string
 * Return: the converted number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)

{
	int i;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num = 2 * num + (b[i] - '0');
	}

	return (num);
}