#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile- reads a file
 * @filename: address of the file
 * @letters: number of bytes
 *
 * Return: returns bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
int fd;
ssize_t bytes;

if (!*filename || !letters)
return (0);

buf = malloc(letters + 1);
if (buf == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (free(buf), 0);

bytes = read(fd, buf, letters);
if (bytes == -1)
return (free(buf), 0);

buf[letters] = '\0';
bytes = write(STDOUT_FILENO, buf, bytes);
if (bytes == -1)
return (free(buf), 0);

free(buf);
close(fd);

return (bytes);

}
