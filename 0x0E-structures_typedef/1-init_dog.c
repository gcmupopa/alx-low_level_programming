#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog- fx initialises variable of type struct dog
 * @d: parameter
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
