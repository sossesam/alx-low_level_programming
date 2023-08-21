#include "main.h"


void docmd(char **argv){
    char *command = NULL;

    if(argv){
        command = argv[0];

        execve(command, argv, NULL);
    }
}
