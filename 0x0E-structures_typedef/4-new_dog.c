#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * new_dog - entry point
 * @name: string from main, name of pet
 * @age: number from main, age of pet
 * @owner: string from main, owner of pet
 * Return: p
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;
p = malloc(sizeof(dog_t));
if (!p)
return (NULL);
(*p).owner = malloc(sizeof(char) * strlen(owner) + 1);
(*p).name = malloc(sizeof(char) * strlen(name) + 1);
if (!name || !owner || age == 0)
{
free(p);
free(name);
free(owner);
return (NULL);
}
strcpy((*p).name, name);
strcpy((*p).owner, owner);
(*p).age = age;
return (p);
}
