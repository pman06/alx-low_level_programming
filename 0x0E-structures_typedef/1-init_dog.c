#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Function to return dog values
 * @d: dog struct
 * @name: name variable
 * @age: age variable
 * @owner: owenr variable
 * Return:  void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
