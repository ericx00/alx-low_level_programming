#include "lists.h"

/**
 * reverse_listint - Function to reverse a listint_t list
 * @head: pointer to pointer to head
 * Return: pointer to a reversed listint
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
