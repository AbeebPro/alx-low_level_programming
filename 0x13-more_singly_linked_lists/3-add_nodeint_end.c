#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @n: Integer to insert in the new node.
 * Return: Address of the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node, *temp;

	last_node = malloc(sizeof(listint_t));
	if (last_node == NULL)
		return (NULL);
	last_node->n = n;
	if (*head == NULL)
	{
		last_node->next = NULL;
		*head = last_node;
		return (*head);
	}
	else
	{
		last_node->next = NULL;
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = last_node;
		return ((temp->next));
	}
}
