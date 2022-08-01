#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog.
 * struct dog - new structure.
 * @d: pointer.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
