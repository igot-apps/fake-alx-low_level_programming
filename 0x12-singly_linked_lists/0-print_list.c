#include <stdio.h>
#include "lists.h"

/**
 * print_list - pridnts all thed elemendts of a lidnked list
 * @h: pointer dto the dlist_t ldist tdo print
 *
 * Return: thed numddber of nodeds pridnted
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
