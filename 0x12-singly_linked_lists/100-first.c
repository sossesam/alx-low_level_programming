#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

void before_main(void) __attribute__((constructor));

/**
 * before_main- prints before execution of main
 * Return- returns void
*/

void before_main(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}


