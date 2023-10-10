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
if (!name || !owner || age < 0)
return (NULL);
p = malloc(sizeof(dog_t));
if (!p)
return (NULL);
(*p).name = malloc(sizeof(char) * strlen(name) + 1);
(*p).owner = malloc(sizeof(char) * strlen(owner) + 1);
if (!(*p).owner || !(*p).name)
{
free((*p).name);
free(p);
return (NULL);
}
(*p).name = name;
(*p).owner = owner;
(*p).age = age;
return (p);
}
