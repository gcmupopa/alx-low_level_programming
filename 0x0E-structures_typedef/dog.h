#ifndef DOG_H
#define DOG_H

/**
 * struct dog- provides name, age and owner of the dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
