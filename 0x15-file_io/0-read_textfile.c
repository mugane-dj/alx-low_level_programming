#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 *
 * @filename: name of file to do I/O operations on.
 * @letters: number of letters to be read and printed.
 * Return: number of letters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count;
	char buff[letters];
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
		
	read(fd, buff, letters);

	count = write(fd, buff, letters);

	if (count == -1)
		return (0);
	
	close(fd);

	return (count);
}
