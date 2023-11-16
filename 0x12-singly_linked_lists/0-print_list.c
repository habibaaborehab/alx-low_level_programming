#include "lists.h"
/**
 * print_list - print list elements in order.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t elements_count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elements_count++;
	}
	return (elements_count);
}
