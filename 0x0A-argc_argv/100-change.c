#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the min num of coins to make change
 * for money
 * @argc: contains number o arguments
 * @argv: string of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int num, j, results;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("error\n");
		return (1);
	}

	num = atoi(argv[1]);
	results = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			results++;
			num -= coins[j];
		}
	}

	printf("%d\n", results);
	return (0);
}
