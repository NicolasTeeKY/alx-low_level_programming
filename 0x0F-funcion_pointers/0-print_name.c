#include "function_pointers.h"

/**
 * print_name - prints a name to stdout
 * @name: name of the person
 * @f: pointer to function that prints
 */
void print_name(char *name,, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
