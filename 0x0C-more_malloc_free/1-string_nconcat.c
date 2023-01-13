#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @n: number of bytes of s2 to be printed.
 * @s1: The first string.
 * @s2: The second string.
 * Return: Null the function fails, it should return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenate;
	unsigned int a = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		a++;

	concatenate = malloc(sizeof(char) * (a + 1));

	if (concatenate == NULL)
		return (NULL);

	a = 0;

	for (i = 0; s1[i]; i++)
		concatenate[a++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concatenate[a++] = s2[i];

	concatenate[a] = '\0';

	return (concatenate);
}
