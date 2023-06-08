#include "main.h"

/**
 * print_rev_recursion - prints string in reverse
 * @s: string to be printed
 */
void _print_rev_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		s++;
	}
}
