#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include <stddef.h>
/**
 * create_file - creates a text file.
 *
 * @filename: name of file to do I/O operations on.
 * @text_content: NULL terminated string to write to file created.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t count;
	int fd, index;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (index = 0; text_content[index]; index++)
			;
	}

	count = write(fd, text_content, index);

	if (count == -1)
		return (-1);

	close(fd);

	return (1);
}
