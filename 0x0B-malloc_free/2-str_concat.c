#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: the two string
 */

char *str_concat(char *s1, char *s2)

{
	size_t i, j, k, l;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}
	for (l = 0; l <= j; l++)
	{
		s[k] = s2[l];
		k++;
	}
	return (s);
}
