#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it to standard output.
 *
 * @filename: name of file to do I/O operations on.
 * @letters: number of letters to be read and printed.
 * Return: number of letters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count, read_out;
	char *buff = NULL;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(*buff) * letters);
	if (buff == NULL)
		return (0);

	read_out = read(fd, buff, letters);
	if (read_out == -1)
		return (0);

	count = write(STDOUT_FILENO, buff, read_out);

	if (count == -1)
		return (0);

	free(buff);
	close(fd);

	return (count);
}
