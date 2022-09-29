#include <unistd.h>

/**
 * _putchar - writes char c to std output
 * @c: the character to print
 *
 * Return: 1 on success. -1 on error, and fix the
 * error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
