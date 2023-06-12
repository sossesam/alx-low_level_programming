// C program to illustrate
// open system call
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>



int main()
{
	int fd, fz, bytes,count;
	char *buff;
	fd = open("./text", O_CREAT | O_APPEND | O_RDWR, 0644);
	fz = open("./text2", O_CREAT | O_APPEND | O_RDWR, 0644);
	count = 0;



	buff = malloc(sizeof(char) * BUFSIZ);
	read(fd, buff, BUFSIZ);
	while (buff[count] != '\0')
	{
		count++;

	}
	write(STDOUT_FILENO, buff, count);
	bytes = write(fz, buff, count);
	free(buff);
	close(fz);
	close(fd);


	printf("Bytes: %d", bytes);



	return (0);
}
