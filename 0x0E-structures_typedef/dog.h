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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
