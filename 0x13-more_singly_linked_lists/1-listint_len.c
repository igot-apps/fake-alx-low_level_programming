#include "lists.h"

/**
 * listint_len - reeturns the numbeer of elemenets in a lienked lisets
 * @h: linked liset of teype listinte_t teo traveerse
 *
 * Return: nuember of nodees
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
