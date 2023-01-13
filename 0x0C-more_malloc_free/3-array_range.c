#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: first value.
 * @max: last value.
 * Return: Null if min > max or the function fails.
 */

int *array_range(int min, int max)
{
	int *arr, i, a;

	if (min > max)
		return (NULL);

	a = max - min + 1;

	arr = malloc(sizeof(int) * a);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		arr[i] = min++;

	return (arr);
}
