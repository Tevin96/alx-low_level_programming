#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c]; c++)
		;

	return (c);
}

/**
 * _strcpy - copies string
 * @dest: destination
 * @src: source
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c]; c++)
		dest[c] = src[c];
	dest[c] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);

	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
