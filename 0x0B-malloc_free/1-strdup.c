#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that duplicates a string
 * @str: the string to duplicate
 *
 * Return: the duplicated string
 */

char *_strdup(char *str)

{
	size_t i, a = 0;
	char *s;

	if (str == NULL)
	{
	return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc((i + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (a = 0; str[a]; a++)
	{
		s[a] = str[a];
	}
	return (s);
}
