#include "lists.h"

/**
 * free_listp - frees a list that is linked
 * @head: head of list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - prints a list that is linked
 * @head: head of list.
 *
 * Return: number of nodes in list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numb = 0;
	listp_t *kang, *new, *add;

	kang = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = kang;
		kang = new;

		add = kang;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&kang);
				return (numb);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		numb++;
	}

	free_listp(&kang);
	return (numb);
}
