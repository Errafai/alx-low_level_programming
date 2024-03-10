#include "dog.h"
/**
 * print_dog - print the dog properties
 * @d: the pointer to the dog
 */
void print_dog(struct dog *d)
{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		if (d == NULL)
			return;
		printf("Name: %s\n", d->name);
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner);
}
