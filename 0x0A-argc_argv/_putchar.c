#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to write
 *
 * Return: 1 on success.
 * -1 on error and err no is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
