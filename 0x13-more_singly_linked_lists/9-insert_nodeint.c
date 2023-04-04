#include "lists.h"

/**
 * insert_nodeint_at_index - fixes a new node to
 * listint_t list at a given position.
 * @head: pointer to head of list.
 * @idx: index of the listint_t list where
 * the new node should be added
 * @n: data to be added to the new node
 *
 * Return: the address of the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *fix;

	fix = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			fix = fix->next;
		}
	}

	if (fix == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = fix->next;
		fix->next = new;
	}

	return (new);
}
