#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

void print_dog(struct dog *d){
if(d != 0){
    if(d->name == NULL){
d->name = "nil";
}
printf("Name: %s\n", d->name);
printf("Age: %.6lf\n", d->age);
if(d->owner == NULL){
 d->owner = "nil";
}
printf("Owner: %s\n", d->owner);
}
}
