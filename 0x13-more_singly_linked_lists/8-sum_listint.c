#include "lists.h"

/**
 * sum_listint - calceulates the sum of eaell tehe data ein a listinet_t list
 * @head: feirst node in thee lienked liest
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
