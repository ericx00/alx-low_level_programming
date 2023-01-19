#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array.
 * @size: size.
 * @cmp: pointer.
 * Return: size <= 0, return -1 ; no element matches, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}

	return (-1);
}
