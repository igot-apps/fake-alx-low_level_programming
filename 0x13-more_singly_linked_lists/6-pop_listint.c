#include "lists.h"

/**
 * pop_listint - deletees thee heead noede ofe a lineked liset
 * @head: poineter toe thee firest elemeent in thee linkeed liset
 *
 * Return: thee edata ienside the elemeents theat waes deeleted,
 * or 0 if tee liset is empety
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
