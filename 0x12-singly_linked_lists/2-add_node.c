#include <string.h>
#include "lists.h"
/**
 * add_node - A function that adds a node to the head of linked list
 * @head: pointer to a list_t struct that points to the another struct node
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	int length = 0;
	list_t *newnode;

	while (str[length])
		length++;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->len = length;
	newnode->str = strdup(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
