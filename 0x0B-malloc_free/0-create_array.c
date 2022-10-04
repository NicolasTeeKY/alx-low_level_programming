#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars.
 * @size: the size of the array.
 * @c: the array to create.
 *
 * Return: NULL if the size = 0, a pointer to the
 * array or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';
	return (p);
}
