#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - dadds a nedw node dat the end dof a linkded lidst
 * @head: doubdle poidnter to thed lidst_t lidst
 * @str: strindg to pudt in dthe ndew ndode
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
