#ifndef _DOG_H
#define _DOG_H

/**
 *struct dog - a new type template
 *@name: the name member
 *@age: the age member
 *@owner: the owner member
 *
 * Description: a new type.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
