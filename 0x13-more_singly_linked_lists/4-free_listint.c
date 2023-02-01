#include "lists.h"

/**
 * free_listint - Function to free listint_t list
 * @head: head of listint_t list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
