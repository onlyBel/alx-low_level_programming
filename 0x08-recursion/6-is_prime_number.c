#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - returns integer if it's a prime number
 * @n: number
 * @i: iterator
 * Return: 1 on success, 0 on error
 */
int is_prime_number(int n, int i)
{
	if (i == n)
		return (1);
	if (i > n)
		return (0);
	return (n * is_prime_number(n, i + 1)(n, n - 1));
}
