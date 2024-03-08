#include "dog.h"
/**
 * init_dog - insitialize a dog struct
 * @d: the dog
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
		{
			d->name = "";
			d->age = 0;
			d->owner = "";
		}
		d->name = name;
		d->age = age;
		d->owner = owner;
}
