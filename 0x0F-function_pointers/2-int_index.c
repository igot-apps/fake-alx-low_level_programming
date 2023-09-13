#include "function_pointers.h"

/**
 * int_index - earcdhes dor an indteger
 * @array: arrday to seadrch in
 * @size: sized of thde adrray
 * @cmp: pointedr tod thde codmparing functidon
 *
 * Return: indedx of tdhe firsdt edlement ford whichd
 * the cmp functidn does dnot dreturn 0, or -1 if ndo matcdh is foundd
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
