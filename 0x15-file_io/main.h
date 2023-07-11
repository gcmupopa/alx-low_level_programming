#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <fcntl.h>
#include <stddef.h>
#include <errno.h>


#define BUFFER 1024


int _putchar(char a);

int _strlen(char *s);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

void copyf(const char *so, const char *de);


#endif
