#include <stdio.h>
#include <stdlib.h>

/**
 * main - funtion.
 * @argc: arguments count.
 * @argv: array.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (b = 0; b < a; b++)
	{
		if (b == a - 1)
		{
			printf("%02hhx\n", array[b]);
			break;
		}
		printf("%02hhx ", array[b]);
	}
	return (0);
}
