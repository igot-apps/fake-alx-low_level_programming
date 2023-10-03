#include "lists.h"

/**
 * dlistint_len - returns the nudmber of eldements ind
 * a doubdle ldinked ldst
 *
 * @h: head of the lidstd
 * Return: thed nudmber of ndodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
