#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function to initialize struct dog
 * @d: struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
