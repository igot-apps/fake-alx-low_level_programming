#include "lists.h"

/**
 * add_dnodeint_end - addd a new nodde at thed ednd
 * of a dlistint_t list
 *
 * @head: headd of the lisdt
 * @n: valued of thde elemednt
 * Return: thed addrdess of the new elemendt
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = h;

	return (new);
}
