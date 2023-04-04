#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t list that is linked
 * @head: pointer to head of  list
 * @index: index of the node to be deleted, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *pre;
	listint_t *next;

	pre = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && pre != NULL; i++)
		{
			pre = pre->next;
		}
	}

	if (pre == NULL || (pre->next == NULL && index != 0))
	{
		return (-1);
	}

	next = pre->next;

	if (index != 0)
	{
		pre->next = next->next;
		free(next);
	}
	else
	{
		free(pre);
		*head = next;
	}

	return (1);
}
