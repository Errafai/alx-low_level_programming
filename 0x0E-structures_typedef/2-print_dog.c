#include "dog.h"
/**
 * print_dog - print the dog properties
 * @d: the pointer to the dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (!d->name)
			printf("nil\n");
		else
			printf("Name: %s\n", d->name);
		if (!d->age)
			printf("nil\n");
		else
			printf("Age: %.1f\n", d->age);
		if (!d->owner)
			printf("nil\n");
		else
			printf("Owner: %s\n", d->owner);
	}
	else
			return;
}
