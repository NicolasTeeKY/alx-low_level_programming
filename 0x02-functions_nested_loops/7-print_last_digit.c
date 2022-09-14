#include "main.h"

/**
 * print_last_digit - Entry
 *
 * Description: prints last digit of a number
 *
 * @i: where you get the last digit of a number
 *
 * Return: the last digit of a number
 */
int print_last_digit(int i)
{
	int n;

	if (i < 0)
		i = -i;

	n = i % 10;

	if (n < 0)
		n = -n;

	_putchar(n + '0');

	return (n);

}
