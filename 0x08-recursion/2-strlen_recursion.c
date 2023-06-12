#include "main.h"
#include <stdio.h>

/**
 * strlen_recursion - returns length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int longint = 0;

	if (*s != '\0') 
	{
		longint++;
		longint = _strlen_recursion(s + 1);
	}
	return
		(1 + _strlen_recursion(s + 1);
	else
		return (0);
}
