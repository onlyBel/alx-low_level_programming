#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - chars1, chars2
 * @s1: input one to concat
 * @s2: input two to concat
 *
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, ci;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;

	concat = malloc(sizeof(char) * (i + ci + 1));

	if (concat == NULL)
		return (NULL);
	i = ci = 0;

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[ci] != '\0')
	{
		concat[i] = s2[ci];
		i++, ci++;
	}
	concat[ci] = '\0';

	return (conact);
}
