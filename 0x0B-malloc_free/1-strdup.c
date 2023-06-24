#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strdup - char that returns pointer
 * @str: string
 * @char: character
 *
 * Return: NULL if fails, strdup on success
 */
char _strdup(char *str)
{
	int i, a = 0;
	char **bbb;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	bbb = malloc(sizeof(char) * (i + 1));
	if (bbb == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		bbb[a] = str[a];
	return (bbb);
}
