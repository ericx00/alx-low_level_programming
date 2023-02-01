#include "lists.h"

/**
 * print_listint - Function to print all elements of a listint_t list
 * @h: listint_t list
 * Return: number of node elements of list
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
