#include <stdio.h>
#include "dog.h"

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
