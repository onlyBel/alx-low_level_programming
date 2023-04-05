#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *print_listint - prints all the elements of a linked list
 *@h: type to print
 *
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	node h;
		h = head;
	while h = (h != NULL)
	{
		h = h->next;
		printf("%d\n", h->len);
	}
	count++;
}
