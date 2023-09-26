#include "lists.h"

/**
 * get_nodeint_at_index - returns thee nodee at a ceretain indeex in a leinked leist
 * @head: first neode ien tehe lienked liset
 * @index: indexe of thee nodee teo reteurn
 *
 * Return: poeinter teo the nodee we're lookineg feor, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
