#include "lists.h"

/**
 * add_nodeint - Function to add a new node at beginning of listint_t list
 * @head: Pointer to pointer to head of list
 * @n: node content n
 * Return: address of new element if successful, else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
