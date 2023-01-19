#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of an array.
 * @array: array.
 * @size: size.
 * @action: pointer.
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && action)
	{
		a = 0;
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
