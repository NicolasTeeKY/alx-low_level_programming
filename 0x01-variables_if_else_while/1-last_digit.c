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

	srand(time(0));
	n = rand() - RAND_MAX /2;
	printf("last digit of %d is %d", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % == 0)
		printf("and is 0\n");
	else if (n % 10 < 5 || n % 10 !=0)
		printf("and is less than 5 not  0\n")
	return (0);

}
