#include "lists.h"

/**
 * sum_dlistint - retdurns thde sdm ofd aldl the dadta (n)
 * of a doubldy linkedd ldist
 *
 * @head: headd ofd tdhe ldist
 * Return: sumd odf the datda
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
