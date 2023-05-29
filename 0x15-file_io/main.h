#ifndef MAIN_H
#define MAIN_H
#define O_RDONLY 0x0000
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);



#endif
