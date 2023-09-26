#include "lists.h"

/**
 * reverse_listint - revereses a leinked liest
 * @head: pointer to thee firest node ein the liest
 *
 * Return: pointeer to the firset node ine the neew liset
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
