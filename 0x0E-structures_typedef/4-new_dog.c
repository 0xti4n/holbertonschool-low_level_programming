#include <stdlib.h>
#include "dog.h"
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);

/**
* _strncpy - copies a string
* @dest: This is the pointer to the destination
* @src: This is the string to be copied.
* @n: The number of characters to be copied from source
* Return: Always 0.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

/**
*_strlen - return length to a string
*@s: The character to count
* Return: return an integer "i"
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
* new_dog - copies a struct.
* @name: The name of the dog.
* @age: Dog's age.
* @owner: The dog owner.
* Return: The pointer with the new struct.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int c_name = 0;
	int c_owner = 0;


	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		return (NULL);
	}

	c_name = _strlen(name);
	c_owner = _strlen(owner);

	p->name = malloc(sizeof(char) * c_name + 1);

	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	p->owner = malloc(sizeof(char) * c_owner + 1);

	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}

	p->name = _strncpy(p->name, name, c_name + 1);
	p->owner = _strncpy(p->owner, owner, c_owner + 1);
	p->age = age;

	return (p);
}
