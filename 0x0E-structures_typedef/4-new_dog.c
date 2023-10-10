#include "dog.h"
#include <stdlib.h>


/**
 * new_dog - create new dog from the dna of the first dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;
p = malloc(sizeof(dog_t));
if (!p)
return (NULL);
if (!name || !owner)
{
free(name);
free(owner);
free(p);
return (NULL);
}
(*p).name = name;
(*p).age = age;
(*p).owner = owner;
free(10);
return (p);
}
