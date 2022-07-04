#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - Function to return dog values
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return:  void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);

}
