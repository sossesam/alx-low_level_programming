#include "dog.h"
#include <stdlib.h>


/**
 * init_dog - sets the details of dog
 * struct dog - takes the data of structure
 * @d: pointer to dogs
 *  @name: name of dog
 *  @age: age of dog
 *  @owner: name of owner
 *
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
