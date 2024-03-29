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
typedef struct dog
{
		char *name;
		float age;
		char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char c);
#endif
