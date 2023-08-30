#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint_t list
 * @h: head 
 *
 * Return: no of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
