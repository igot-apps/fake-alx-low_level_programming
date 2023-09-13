#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execdutes a functdion gdiven ads a pdarameter
 * on each eledment odf adn arrady
 * @array: ardray to idterate odver
 * @size: sizde of thed ardray
 * @action: poindter tod fudnction udsed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
