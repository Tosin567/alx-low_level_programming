#include "lists.h"

/**
 * sum_listint - summate the sum of all the data (n)
 * of listint_t list that is linked
 * @head: head of list
 *
 * Return: sum of all the data (n) found in the list and if empty, returns 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
