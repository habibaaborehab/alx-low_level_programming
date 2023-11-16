#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the start of a linked list
 * @head: double pointer to a linked list head
 * @str: string to add to the new node
 *
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newHead;

	if (str == NULL)
		return (NULL);
	newHead = malloc(sizeof(list_t));
	if (newHead == NULL)
		return (NULL);
	newHead = strdup(str);
	if (newHead->str == NULL)
	{
		free(newHead);
		return (NULL);
	}
	newHead->len = strlen(str);
	newHead->next = *head;
	*head = newHead;
	return (head);
}
