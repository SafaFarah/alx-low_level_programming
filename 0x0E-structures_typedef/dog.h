#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: Define a new type struct dog with the following elements:
 name, type = char* , age, type = float
 owner, type = char*
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
