#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the array of int
 * @height: the heigth of the array of int
 *
 * Return: the pointer
 */

int **alloc_grid(int width, int height)

{
	int i, j;
	int **s;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	 s = malloc(height * sizeof(int *));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (i--; i <= 0; i--)
			free(s);
			free(s[i]);
			return (NULL);
		}
	}

		for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
		{
		s[i][j] = 0;
		}

		return (s);
}
