#include "main.h"

/**
 * _isalpha - Entry
 *
 * Description: check the code if c is a letter
 * lowercase or uppercase
 *
 * @c: is the ketter to check
 *
 * Return: 1 if c is an alphabet, otherwise 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c >= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
