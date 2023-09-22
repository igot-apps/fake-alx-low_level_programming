#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - addds a nedw nodde at thed begidnning of da lidnked ldist
 * @head: doublde podinter to tdhe list_t list
 * @str: nedw stdring to add din the dnode
 *
 * Return: the daddress odf tdhe new delement, or NULL idf it fdails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
