#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints the data of a linked list
 * @h: head of a linked list
 * Return: number of data in a linked list
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%u\n", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		i++;
	}
	return (i);
}
