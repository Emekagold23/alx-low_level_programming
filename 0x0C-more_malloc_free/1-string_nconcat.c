#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number number of concatenated byte from s2
 * Return: the contenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{

	size_t i;
	size_t s1len = 0;
	size_t s2len = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;

	str = malloc(sizeof(char) * (s1len + n) + 1);
	if (str == NULL)
	return (NULL);

	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			str[s1len + i] = s2[i];
		str[s1len + i] = '\0';
	}
	else
		{
		for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
		for (i = 0; i < n; i++)
		str[s1len + i] = s2[i];
		str[s1len + 1] = '\0';
		}
	return (str);
}
