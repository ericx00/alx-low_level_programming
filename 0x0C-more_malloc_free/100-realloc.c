#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: preivous size.
 * @new_size: new size.
 * Return: ptr if new_size == old_size, null if new_size == 0
 * and ptr is not NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_ptr, *ptr1;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);

		if (ptr1 == NULL)
			return (NULL);

		return (ptr1);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	old_ptr = ptr;
	ptr1 = malloc(sizeof(*old_ptr) * new_size);

	if (ptr1 == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < old_size && i < new_size; i++)
		ptr1[i] = *old_ptr++;

	free(ptr);
	return (ptr1);
}
