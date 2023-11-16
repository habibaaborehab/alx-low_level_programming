#include "lists.h"

/**
 * list_len - finds the length of a linked list
 * @h: pointer to list head
 *
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t len;

	for (len = 0; h; len++)
		h = h->next;
	return (len);
}
