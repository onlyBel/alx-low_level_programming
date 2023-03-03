#include "main.h"
/**
 * _strcmp - comprises two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + 1) == '\0') && (*(s2 + 1) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}
