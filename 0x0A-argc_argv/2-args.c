#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: contains the number of arguments
 * @argv: the string containing the arguments
 *
 * Return: 0.
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
