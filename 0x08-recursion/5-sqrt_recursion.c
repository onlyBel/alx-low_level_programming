#include "main.h"
#include <stdio.h>

/**
 * sqrt_recursion - returns square root of a number
 * @n: number to square
 *
 * Return: 1 on success, -1 on error
 */
int _sqrt_recursion(int n, int b)
{
	if(b * b == n)
		return(1);
	if(b * b > n)
		return(-1);
	return(n * _sqrt_recursion(n, b + 1));
}
