#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>

/*Prototypes*/

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *allocate_mem(char *file_name);
void terminate_fd(int fd);


#endif
