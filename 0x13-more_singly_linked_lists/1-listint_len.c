#include "lists.h"

/**
 * listint_len - Function to return no. of elements in a linked list listnt_t
 * @h: listint_t list
 * Return: no. of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t sum = 0;

	while (h)
	{
		sum++;
		h = h->next;
	}

	return (sum);
}}
