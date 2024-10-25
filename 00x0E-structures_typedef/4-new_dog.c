#include "dog.h"

/**
 * slen - function that tells the lenght of a string
 * @s : string
 * Return: the lenght
 */
int slen(char *s)
{
	int l = 0;

	while (*s)
	{
		l++;
		s++;
	}
	return (l);
}

/**
 * scpy - copies a strings
 * @src: the string to copy
 * @dst: the destination
 * Return: the pointer to dest
 */

char *scpy(char *dst, char *src)
{
	char *ori;

	ori = dst;
	while (*src)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (ori);
}

/**
 * new_dog - function that creates a new dog.
 * @name : name of the new dog.
 * @age : age of the dog
 * @owner : name of the dog's owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(slen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	scpy(new_dog->name, name);
	new_dog->owner = malloc(slen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	scpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
