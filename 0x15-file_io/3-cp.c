#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include <stddef.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * terminate_fd - close file descriptor.
 *
 * @fd: file descriptor.
 * Return: void.
 */

void terminate_fd(int fd)
{
	int output;

	output = close(fd);

	if (output == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * allocate_mem - allocates memory for a buffer.
 *
 * @file_name: name of file being allocated buffer for.
 * Return: A point to the buffer allocated memory.
 */

char *allocate_mem(char *file_name)
{
	char *buff;

	buff = malloc(sizeof(char) * BUFFER_SIZE);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n",
				file_name);
		exit(99);
	}

	return (buff);
}

/**
 * main - copies contents in one file to another file.
 *
 * @argc: number of arguments passed to the program.
 * @argv: Array pointer to file names passed to the program.
 * Return:
 *	97 if the number of arguments is not 3.
 *	98 if the file with text content doesn't exist.
 *	99 if the program can't create or write to second file.
 *	100 if the program can't close the file descriptor.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, fd, count;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = allocate_mem(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	fd = read(file_from, buff, BUFFER_SIZE);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_from == -1 || fd == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		free(buff);
		exit(98);
	}

	count = write(file_to, buff, fd);

	if (file_to == -1 || count == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
		free(buff);
		exit(99);
	}

	free(buff);
	terminate_fd(file_from);
	terminate_fd(file_to);

	return (0);
}
