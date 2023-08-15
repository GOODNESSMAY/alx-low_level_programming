#include <stdlib.h>
#include "dog.h"

/**
* _strlen - length of a string
* @s: string used to evaluate
*
* Return: length of the string in this code
*/

int _strlen(char *s)
	{
	int h;

	h = 0;

	while (s[h] != '\0')
	{
	h++;
	}

	return (h);
	}

/**
* _strcpy - to copy the string by src
* include the null terminator byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer which was copied by string
* @src: string that i would be using
*
* Return: pointer to destination
*/

char *_strcpy(char *dest, char *src)
	{
	int len, h;

	len = 0;

	while (src[len] != '\0')
	{
	len++;
	}

	for (h = 0; h < len; h++)
	{
	dest[h] = src[h];
	}
	dest[h] = '\0';

	return (dest);
	}

/**
* new_dog - creates a new dog
* @name: name - dog
* @age: age - dog
* @owner: owner - dog
*
* Return: pointer to the new dog (Success), NULL otherwise
*/
	dog_t *new_dog(char *name, float age, char *owner)
	{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
	free(dog);
	return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
	free(dog);
	free(dog->name);
	return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
	}

