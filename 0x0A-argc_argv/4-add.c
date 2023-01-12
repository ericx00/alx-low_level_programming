#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: argument count.
 * @argv: arguments.
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a, n, s = 0;
	char *boom;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; argv[a]; a++)
	{
		n = strtol(argv[a], &boom, 10);
		if (*boom)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			s += n;
		}
	}
	printf("%d\n", s);

	return (0);
}
