#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int den, lair, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	for (den = 0; name[den]; den++)
		;
	den++;
	(*dog).name = malloc(den * sizeof(char));

	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);

	}
	for (i = 0; i < den; i++)
		(*dog).name[i] = name[i];
	dog->age = age;

	for (lair = 0; owner[lair]; lair++)
		;
	lair++;
	dog->owner = malloc(lair * sizeof(char));

	if (dog->owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < lair; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
