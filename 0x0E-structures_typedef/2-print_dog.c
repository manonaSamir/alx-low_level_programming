#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;
if ((*d).name == NULL)
(*d).name = "Name: (nil)";
if ((*d).owner == NULL)
(*d).owner = "Owner: (nil)";
if ((*d).age == 0)
(*d).owner = "age: (nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
