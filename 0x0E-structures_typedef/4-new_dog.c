#include "dog.h"
#include <stdlib.h>
/**
*init_dog - initialize a var of type struct dog i+s = apt
*@name: chnedhirar
*@age: float
*@owner: char
*Return: 0
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int sari3 = 0;
int bar9 = 0;
dog_t *bel7a_vs_joke = malloc(sizeof(dog_t *));
if (name == NULL || owner == NULL)
return (NULL);
if (bel7a_vs_joke == NULL)
free(bel7a_vs_joke);
return (NULL);
bel7a_vs_joke->age = age;
while(name[sari3] != '\0')
sari3++;
bel7a_vs_joke->name = malloc(sizeof(char) * sari3);
if (bel7a_vs_joke->name == NULL)
free(bel7a_vs_joke->name);
return (NULL);
if(sari3 != 0)
sari3 = 0;
while(name[sari3] != '\0')
{
bel7a_vs_joke->name[sari3] = name[sari3];
sari3++;
}
while(owner[bar9] != '\0')
bar9++;
bel7a_vs_joke->owner = malloc(sizeof(char) * bar9);
if (!bel7a_vs_joke)
free(bel7a_vs_joke->owner);
return (NULL);
if (bar9 != 0)
bar9 = 0;
while(owner[bar9] != '\0')
{
bel7a_vs_joke->owner[bar9] = owner[bar9];
bar9++;
}
free(bel7a_vs_joke);
return(bel7a_vs_joke);
}
