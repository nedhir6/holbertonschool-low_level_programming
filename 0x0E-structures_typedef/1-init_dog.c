#include "dog.h"
/**
*init_dog - initialize a var of type struct dog
*@d: struct
*@name: char
*@age: float
*@owner: char
*Return: 0
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
