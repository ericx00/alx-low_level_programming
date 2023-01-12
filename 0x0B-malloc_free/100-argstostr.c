#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: number.
 * @av: array.
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 * Otherwise - a pointer to the new string.
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int a, b, i, c = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			c++;
	}

	string = malloc(sizeof(char) * c + 1);

	if (string == NULL)
		return (NULL);

	i = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			string[i++] = av[a][b];

		string[i++] = '\n';
	}

	string[c] = '\0';

	return (string);
}
