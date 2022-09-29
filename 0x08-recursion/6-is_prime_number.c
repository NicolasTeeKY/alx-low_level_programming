#include "main.h"

/**
 * is_prime_number - checks if a number is a prime
 * number
 * @n: the number to check
 *
 * Return: 1 if n is a real number , 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
