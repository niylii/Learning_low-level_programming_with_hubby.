#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: a pointer to the type struct dog. 
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
