#include "lists.h"

/**
 * free_listint2 - Function to free a listint_t list
 * @head: Pointer to pointer to head of list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
