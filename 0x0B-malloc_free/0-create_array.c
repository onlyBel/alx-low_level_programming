#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * description - creates an array of chars
 * create_array - create array of size size & assign char c
 * @c: char to assign
 * @size: size of array
 * Return: pointer to array, NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str = c;
	return (str);
}
