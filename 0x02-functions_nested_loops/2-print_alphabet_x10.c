#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: prints an alphabet 10 times in a
 * lowercase, followed by a newline
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;
	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar (ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

