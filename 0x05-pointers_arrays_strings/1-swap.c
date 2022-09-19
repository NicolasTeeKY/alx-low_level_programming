#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: the pointer to first value
 * @b: the pointer to second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
