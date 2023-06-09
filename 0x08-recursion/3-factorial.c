#include "main.h"
#include <stdio.h>

/**
 * factorial - returns factorial of a number
 * @n: number
 * Return: 0 on success, -1 on error
 */
int factorial(int n)
{
	if(n ==0)
		return(1);
	if(n < 0)
		return(-1);
	return(n * factorial(n - 1));
}

