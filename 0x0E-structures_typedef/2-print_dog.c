#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *print_dog - function prints struct dog
 *@d: pointer to the address
 *Return:
 *
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(*d).name)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);

		if (!(*d).age)
			printf("Age: (nil)");
		else
			printf("Age: %f\n", d->age);
		if (!(*d).owner)
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
