#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *free_dog - frees dog
 *
 *@d: pointer to the memory space
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
