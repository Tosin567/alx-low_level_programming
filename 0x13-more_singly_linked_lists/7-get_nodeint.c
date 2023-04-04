#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t that is linked
 * @head: head of list pointer
 * @index: index of node, starting at 0
 *
 * Return: nth node pointer or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int numb;

	for (numb = 0; numb < index && head != NULL; numb++)
	{
		head = head->next;
	}

	return (head);
}
