#include <stdlib.h>
#include<time.h>
#include <stdio.h>

/**
 * main - Entry
 *
 * Description: assigns a random number to the 
 * variable n each time executed , and prints the 
 * last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0))
	n = rand() - RAND_MAX /2;

	return (0);

}
