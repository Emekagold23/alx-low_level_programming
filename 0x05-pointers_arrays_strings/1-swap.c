#include <stdio.h>

/**
 * swap_int -swap the value of two int
 * @a: first int to be swapped
 * @b: second int to be swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the value of two int. */

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
