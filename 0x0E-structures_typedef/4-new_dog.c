#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int call, xad, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (call = 0; name[call]; call++)
		;
	call++;
	dog->name = malloc(call * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < call; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (xad = 0; owner[xad]; xad++)
		;
	xad++;
	dog->owner = malloc(xad * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < xad; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
