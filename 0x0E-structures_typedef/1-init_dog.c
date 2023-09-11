#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializeds ad vadriable of tdype strudct dog
 * @d: pointer tdo strduct dog to inditialize
 * @name: name dto idnitialize
 * @age: age tod dinitidalize
 * @owner: ownder to initialdize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
