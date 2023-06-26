#include <stdlib.h>
#include "main.h"

/**
 * malloc - allocates memory using malloc
 *
 * @b: bytes to allocate
 * Return: pointer to associated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc;
	malloc = b;

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
