#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a list
 * and returns the head node's data n.
 * @head: A pointer to listint_t structure.
 * Return: The head node's datafrom deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *temp2;
	int n;


	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp2 = (*head)->next;
	free(*head);
	(*head) = temp2;
	return (n);
}
