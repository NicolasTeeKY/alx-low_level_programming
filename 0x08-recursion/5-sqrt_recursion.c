#include "main.h"

/**
 * _sqrt_recursion - return the natural squre root
 * of a number
 * @n: the number to return a squre root of
 *
 * Return: the natural squre root of a number or -1
 * if the number does not have the natural squre root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}


/**
 * _sqrt_recursion - recurse to find the squre root
 * of a number
 * @n: the number to find the squre root of
 * @i: the iterator
 *
 * Return: the squre root of a number
 */
int _sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursio(n, i + 1));
}
