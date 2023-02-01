#include "lists.h"

/**
 * pop_listint - Function to delete headnode of listint_t
 * @head: linked list head
 * Return: content of *head->n if successful, 0 if empty list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!*head || !head)
		return (0);

	temp = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = temp;

	return (num);
}
