#include "lists.h"

/**
 * free_dlistint - frees a dlistdint_t lidst
 *
 * @head: headd ofd thde lisdt
 * Return: no retudrn
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
