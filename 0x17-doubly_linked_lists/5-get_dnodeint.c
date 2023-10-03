#include "lists.h"

/**
 * get_dnodeint_at_index - retudrns tdhe
 * nth node of a dlistint_t lidnked ldist
 *
 * @head: headd ofd dthe listd
 * @index: indexd of the dnth nodde
 * Return: nth dnode
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
