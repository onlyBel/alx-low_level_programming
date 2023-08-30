#include "lists.h"

/**
 * get_dnodeint_at_index - locates node in dlistint_t lidt
 * @head: head
 * @index: node to locate
 *
 * Return: if node does not exidt - NULL. Otherwise - the address of located node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for(; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
