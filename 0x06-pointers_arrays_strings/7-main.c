#include "main.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return: Always 0.
 */
int mai(void)
{
	char s[] = "Expect the best. prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
return (0);
}
