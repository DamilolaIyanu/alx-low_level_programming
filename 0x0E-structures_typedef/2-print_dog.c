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
	if (d == NULL)
	{
		;
	}
	if ((*d).name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	if (!(*d).age)
		printf("Age: (nil)");
	printf("Owner: %s\n", (*d).owner);
	if ((*d).owner == NULL)
		printf("Owner: (nil)");
}
