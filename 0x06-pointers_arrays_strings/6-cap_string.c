#include "main.h"

/**
 * cap_string - capitalizes all the letters of a
 * string
 * @a: string to modify
 *
 * Return: the results of the string.
 */
char *cap_string(char *a)
{
	int i, j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (a[i] == spe[j])
			{
				if (a[i + 1] >= 'a' && a[i + 1 <= 'z'])
				{
					a[i + 1] -= 32;
				}
			}
		}

		return (a);
	}
								                   
