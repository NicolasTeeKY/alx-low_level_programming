#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string to compare
 * @s2: second string
 *
 * Return: less than 0 if the first string is less
 * than the second, 0 if they are equal , greater
 * than 0 if the first is greater than the second.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}