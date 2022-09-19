#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array of integers followed by
 * a new line
 * @a: array to be printed
 * @n: number of elements of an array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i])
		else
			prinf(", %d, a[i])
	}

	printf("\n")VG
}
