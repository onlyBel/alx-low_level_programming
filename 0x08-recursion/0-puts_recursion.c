#include "main.h"

/**
 *_puts_recursion - a function that puts()
 *
 *@s: input character
 *Return: 0 on success
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	else
		_putchar('\n');
}
