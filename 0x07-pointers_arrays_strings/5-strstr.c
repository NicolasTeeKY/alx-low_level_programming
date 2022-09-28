#include "main.h"
#include <stdio>

/**
 * *_strstr - locates a substring
 * @haystack: the string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beggining of the located
 * substring , NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j]
				return (&haystack[i]);
	}
	return (NULL);
}
