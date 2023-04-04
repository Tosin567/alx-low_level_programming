#include "lists.h"

/**
 * find_listint_loop - finds the loop in a list that is linked
 * @head: head of list.
 *
 * Return: the address of the node which starts the loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tail;
	listint_t *pre;

	tail = head;
	pre = head;
	while (head && tail && tail->next)
	{
		head = head->next;
		tail = tail->next->next;

		if (head == tail)
		{
			head = pre;
			pre =  tail;
			while (1)
			{
				tail = pre;
				while (tail->next != head && tail->next != pre)
				{
					tail = tail->next;
				}
				if (tail->next == head)
					break;

				head = head->next;
			}
			return (tail->next);
		}
	}

	return (NULL);
}
