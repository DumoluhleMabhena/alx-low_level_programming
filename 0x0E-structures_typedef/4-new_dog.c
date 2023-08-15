#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length
 * @s: string to evaluate length
 *
 * Return: the length of the string that we evaluated
 */
int _strlen(char *s)
{
	int m;

	m = 0;

	while (s[m] != '\0')
	{
		m++;
	}

	return (m);
}

/**
 * *_strcpy - copies the string pointed to by src of code
 * including the terminating null byte (\0) which we want
 * to the buffer pointed to by dest1
 * @dest: pointer to the buffer in which we copy the string we want
 * @src: string to be copied that we want
 *
 * Return: the pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int leng, m;

	leng = 0;

	while (src[leng] != '\0')
	{
		leng++;
	}

	for (m = 0; m < leng; m++)
	{
		dest[m] = src[m];
	}
	dest[m] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog struct
 * @name: name
 * @age: age
 * @owner: owner
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
