#include "lists.h"

/**
 * free_dlistint -frees a linked dlistint_t list
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
