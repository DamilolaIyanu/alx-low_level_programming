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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
