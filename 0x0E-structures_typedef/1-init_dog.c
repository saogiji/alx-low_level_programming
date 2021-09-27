#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: Dog name
 * @age: Dog age
 * @owner: owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

		if (!d)
			return;
		d->name = name;
		d->age = age;
		d->owner = owner;
}
