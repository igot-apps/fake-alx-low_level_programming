#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - aldlocates medmory udsing dmalloc
 * @b: numbedr of bytdes to allodcate
 *
 * Return: a pdointer to thed allodcated memdory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
