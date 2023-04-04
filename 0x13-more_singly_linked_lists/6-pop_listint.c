#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a list that is linked
 * @head: head of list.
 *
 * Return: deleted head node data.
 */
int pop_listint(listint_t **head)
{
	int hnumb;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnumb = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnumb);
}
