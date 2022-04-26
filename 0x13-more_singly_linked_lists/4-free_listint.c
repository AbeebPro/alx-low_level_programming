#include "lists.h"

/**
 * free_listint - A function that frees a linked list
 * @head: The pointer to head of the linked list to free
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
