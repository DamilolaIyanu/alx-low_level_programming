#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - function initializes variable of type struct dog
 *@d: the pointer to the memory space
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the owner of the dog
 *Return: Returns NULL on failure or the pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
