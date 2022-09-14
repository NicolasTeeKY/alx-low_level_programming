#include "main.h"

/**
 * print_to_98 - entry
 *
 * Descriptio: prints all natural numbers
 *
 * @n: fom this number to 98
 *
 * Return: Always 0
 *
 */
int print_to_98(int n)
{
	int x, y;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x != 98)

				_putchar("%d, ", y);
			else if (x == 98)

				_putchar('%d\n', x);
		}
		else if (n >=  98)
		{
			for (y = n; y >= 98; y--)
			{
				if (y != 98)
					_putchar'%d, ', j);
				else if (y == 98)

					_putchar('%d\n', y);
			}
		}
	}
}
