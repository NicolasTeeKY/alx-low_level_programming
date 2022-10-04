#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a new duplicate
 * string.
 * @str: the new string to hold the duplicate content
 *
 * Return: NULL if str = NULL, duplicated string on
 * success
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str)
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
