#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed to it
 * @argc: contains number of arguments
 * @argv: string that contains the arguments
 *
 * Return : 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", -1 + argc);
	return (0);
}
