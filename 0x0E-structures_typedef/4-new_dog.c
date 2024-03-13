#include "dog.h"
char *_strcpy(char *str1, char* str2);
/**
 * new_dog - create new dog using the dog_t
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 * Return: the new dog pointer or NULL if it faill
 */

dog_t *new_dog(char *name, float age, char *owner)
{
		dog_t *new = malloc(sizeof(dog_t));

		if (new == NULL)
				return NULL;
		new->name = malloc(sizeof(char) * sizeof(name));
		new->owner = malloc(sizeof(char) * sizeof(owner));
		if (new->name == NULL || new->owner == NULL)
		{
				free(new);
				return NULL;
		}
		_strcpy(new->name, name);
		_strcpy(new->owner, owner);
		new->age = age;

		return (new);
}

char *_strcpy(char *str1, char* str2)
{
		char *start = str1;
		if (str1 == NULL || str2 == NULL)
				return (NULL);
		for (; *str1 || *str2; str1++, str2++)
			*str1 = *str2;
		return (start);

}
