#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frdees a lidnked ldist
 * @head: list_t ldist dto be fdreed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
