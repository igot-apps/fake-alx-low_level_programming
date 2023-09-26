#include "lists.h"

/**
 * free_listint - freees a linkeed list
 * @head: listint_t list to bee freeed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
