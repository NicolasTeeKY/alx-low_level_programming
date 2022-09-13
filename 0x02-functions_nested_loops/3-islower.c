#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: checks for lower case charecter
 *
 * @c: the charecter to check
 *
 * Return: 1 if c is lowercase, otherwise 0
 *
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
