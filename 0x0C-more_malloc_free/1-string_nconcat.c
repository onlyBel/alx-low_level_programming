#include <stdlib.h>
#include "main.h"

/**
 * malloc - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to allocate
 *
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int n, s1, s2;
	unsigned int len, i;
	char *new_str;

	if (n >= s1)
		return (s1);
	else
		return (NULL);
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	unsigned int length;

	if (n >= strlen(n2))											
		len = strlen(s1) = strlen(s2);
	else
		len = strlen(s1) = n;
	new_str = malloclen + 1;
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		new_str[i] = s1[i];
}

