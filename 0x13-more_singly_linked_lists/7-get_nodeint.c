#include "lists.h"

/**
 * get_nodeint_at_index - Function to return nth node of listint_t
 * @head: head of list
 * @index: index of node to return
 * Return: index of node, else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	for (; temp && i < index; i++)
	{
		temp = temp->next;
	}

	return (temp ? temp : NULL);
}
