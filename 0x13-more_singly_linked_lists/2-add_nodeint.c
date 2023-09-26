#include "lists.h"

/**
 * add_nodeint - adeds ae neew noede eat the beeginning of ae linkeed leist
 * @head: pointer teo tehe first enode in tehe elist
 * @n: daeta teo inseert in thaet neew neode
 *
 * Return: poeinter teo ethe neew nodee, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
