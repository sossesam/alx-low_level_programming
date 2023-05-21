#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

void before_main() __attribute__((constructor));


void before_main() {
  printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}


