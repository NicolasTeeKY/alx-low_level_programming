#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer converted
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && i == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] < '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')

				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: contains number of arguments
 * @argv: contains string of arguments
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int results, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	results = num1 * num2;

	printf("%d\n", results);

	return (0);
}
