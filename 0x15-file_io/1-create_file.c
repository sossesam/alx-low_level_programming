#include "main.h"

/**
 * create_file - function to create file
 * @filename: pointer to the file name to be created
 * @text_content: str to be written in the file
 * Return: 1 success -1 fail
 */

int create_file(const char *filename, char *text_content)
{
    int fd, output, strlen;

    if(filename == NULL)
    return (-1);


    fd = open(filename, O_RDWR|O_CREAT|  O_TRUNC, 0600);
    if (fd == -1)
        return (-1);

    if(text_content == NULL)
        return (1);

    strlen = 0;
    while( text_content[strlen] != '\0')
    {
        strlen++;
    }

    output = write(fd, text_content, strlen);

    if (output == -1 || output != strlen)
		return (-1);

	close(fd);
	return (1);


}

