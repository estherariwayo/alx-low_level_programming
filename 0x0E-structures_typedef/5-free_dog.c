#include <stdlib.h>
	#include "dog.h"


	/**
	 * free_dog - frees memory allocated for a struct dog
	 * @d: struct dog to free
	 */
	void free_dog(dog_t *d)
	{
if (d == 0)
return;
free(d->name);
free(d->owner);
free(d);
	}
/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Return: pointer to the new dog (Success), NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;
len1 = _strlen(name);
len2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
}
