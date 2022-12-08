#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include <stddef.h>
/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: name of file to do I/O operations on.
 * @text_content: NULL terminated string to write to file created.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t count;
	int fd, index;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (index = 0; text_content[index]; index++)
			;
	}

	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, S_IRUSR | S_IWUSR);

	count = write(fd, text_content, index);

	if (fd == -1 || count == -1)
		return (-1);

	close(fd);

	return (1);
}
