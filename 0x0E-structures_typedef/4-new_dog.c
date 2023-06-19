#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to memory address
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int g, h, t;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (g = 0; name[g]; g++)
		;
	g++;
	dog->name = malloc(g * sizeof(char));
	if (dog->name == NULL)

	{
		free(dog);
		return (NULL);
	}

	for (h = 0; h < g; h++)
		dog->name[h] = name[h];
	dog->age = age;
	for (t = 0; owner[t]; t++)
		;
	h++;
	dog->owner = malloc(h * sizeof(char));
	if (dog->owner == NULL)

	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (t = 0; t < h; t++)
		dog->owner[t] = owner[t];
	return (dog);
}
