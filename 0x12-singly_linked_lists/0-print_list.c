#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all elements of linked list
 *
 * @h: pointer
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
