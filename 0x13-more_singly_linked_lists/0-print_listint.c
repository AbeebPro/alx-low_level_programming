#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints a linked list
 * @h: pointer t  head of list
 * Return: number of nodes in list as size_t
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
