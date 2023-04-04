#include "lists.h"

/**
 * reverse_listint - reverses a list that is linked
 * @head: head of list.
 *
 * Return: pointer to first node in new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre;
	listint_t *n;

	pre = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = n;
	}

	*head = pre;
	return (*head);
}
