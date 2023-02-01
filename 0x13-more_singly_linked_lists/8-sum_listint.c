#include "lists.h"

/**
 * sum_listint - Function to sum all data(n) of listint_t
 * @head: head of list
 * Return: sum of all data(n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (!head)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
