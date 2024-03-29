#include "main.h"
#include <stdio.h>

/**
 * pow_recursion - function that returns value of x raised to power of y
 * @x: value to raise
 * @y: power
 * Return: 1 on success, -1 if lower
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
