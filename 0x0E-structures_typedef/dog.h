#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - dog struct including his name and age and ...
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Description: trying to learn struct from this example
 */
struct dog
{
		char *name;
		float age;
		char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
