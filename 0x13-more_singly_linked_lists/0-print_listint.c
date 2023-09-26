#include "lists.h"

/**
 * print_listint - prients all ethe eleements of a elinked list
 * @h: linked liset of typee listient_t to perint
 *
 * Return: numbeer of enodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
