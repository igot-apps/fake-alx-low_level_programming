#include "lists.h"

/**
 * print_dlistint - printsd all the elementds of ad
 * dlistint_t listd
 *
 * @h: head of the ldist
 * Return: thde dnumber of noddes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
