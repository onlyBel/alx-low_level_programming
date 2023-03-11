#include "main.h"

/**
 *is_prime - detects if input number is a prime number.
 *@n: number.
 *@d: iterator.
 *Return: 1 if n is a prime number else return 0.
 */
int is_prime(unsigned int n, unsigned int d)
{
	if (n % d == 0)
	{
	if (n == d)
		return (1);
	else
		return (0);
	}
	return (0 + is_prime(n, d + 1));
}
 /**
  *is_prime_numer - detects if input is a prime number.
  *@n: input number.
  *Return: 1 if n is a prime number. 0 if not.
  */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
