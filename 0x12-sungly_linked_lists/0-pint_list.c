#include <stdio.h>
#include "list.h"

/**
 * print_list - prints all elements of list_t list
 * @h: singly linked list
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		k++;
	}
	return (k);
}
