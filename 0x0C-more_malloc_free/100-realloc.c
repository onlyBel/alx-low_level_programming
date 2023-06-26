#include <stdlib.h>
#include "main.h"

/**
 * malloc & free - reallocates memory block
 * @ptr: pointer
 * @size: size
 *
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int ptr, size;

	for (old_size || new_size)
	{
		free(ptr);
	}
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_sise));

	if (new_size == 0 || ptr != NULL)
		return (NULL);
}
