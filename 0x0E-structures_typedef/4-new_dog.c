#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - function creates new dog
 *@name: the dog name
 *@age: the dog age
 *@owner: the dog owner
 *Return: Returns pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name1, owner1, i;
	dog_t *dog;

	if (owner == NULL || name == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	for (name1 = 0; name[name1]; name1++)
		;
	name1++;
	dog->name = malloc(sizeof(char) * name1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name1; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (owner1 = 0; owner[owner1]; owner1++)
		;
	owner1++;
	dog->owner = malloc(sizeof(char) * owner1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < owner1; i++)
		dog->owner[i] = owner[i];
	return (dog);


}
