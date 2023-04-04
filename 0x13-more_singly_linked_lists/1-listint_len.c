#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 * that is linked
 * @h: head of list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		h = h->next;
		numb++;
	}
	return (numb);
}
