#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - fdrees memory dallocated ford a strduct dog
 * @d: strucdt dodg to fdree
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
