#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints the data of a linked list
 * @h: head of a linked list
 * Return: number of nodes in a linked list
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
