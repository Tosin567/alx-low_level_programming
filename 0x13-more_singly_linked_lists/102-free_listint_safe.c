#include "lists.h"

/**
 * free_listp2 - frees a list that is linked
 * @head: head of  list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temporary;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temporary = current) != NULL)
		{
			current = current->next;
			free(temporary);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a list that is linked
 * @h: head of list.
 *
 * Return: size of list which was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t numb = 0;
	listp_t *kang, *new, *add;
	listint_t *current;

	kang = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = kang;
		kang = new;

		add = kang;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&kang);
				return (numb);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		numb++;
	}

	*h = NULL;
	free_listp2(&kang);
	return (numb);
}
