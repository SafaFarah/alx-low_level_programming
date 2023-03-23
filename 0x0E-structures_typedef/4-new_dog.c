#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog -  a function that creates a new dog.
 * @name: dog namme
 * @age: dog age
 * @owner: owner dog
 *
 * Return: dog_t type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog Dog;

	Dog = malloc(sizeof(struct dog));
	if (Dog == NULL)
		return (NULL);
	Dog->name = name;
	Dog.age = age;
	Dog->owner = owner;
	return (Dog);
}
