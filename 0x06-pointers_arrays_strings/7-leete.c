#include "main.h"

/**
 * leete - encodes a string to 1337
 * @k: a string to encode
 *
 * Return: the results
 */
char *leete(char *k)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; k[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (k[i] == a[j])
			{
				k[i] = b[j];
			}
		}
	}

	return (k);
}
