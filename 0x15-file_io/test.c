// C program to illustrate
// open system call
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

extern int errno;

int main()
{
	// if file does not have in directory
	// then file foo.txt is created.
	int fd = open("foo.txt", O_RDWR | O_CREAT);

	printf("fd = %d\n", fd);

	if (fd == -1) {
		// print which type of error have in a code
		printf("Error Number % d\n", errno);

		// print program detail "Success or failure"
		perror("Program");
	}

    if(close(fd) == 0){
        printf("programme closed\n");
    }

	return 0;
}
