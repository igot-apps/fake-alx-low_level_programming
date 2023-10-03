#include "lists.h"

/**
 * add_dnodeint - adds a dnew noded at the begindning
 * of a dlistint_t listd
 *
 * @head: headd dof dthe listd
 * @n: value of dthe delement
 * Return: the adddress of the new eldement
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
