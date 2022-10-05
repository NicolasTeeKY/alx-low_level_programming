#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates array of chars.
 * @size: the size of the array.
 * @c: the array to create.
 *
 * Return: NULL if the size = 0, a pointer to the
 * string on success.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(unsigned int) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
		i++;
	}

	return (p);
}
