#include <stdio.h>
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
	dog_t dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog.age = age;
	dog->owner = owner;
	return (dog);
}
