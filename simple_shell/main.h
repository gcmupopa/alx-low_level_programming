#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/wait.h>


void free_t(char **tokens);

char **tokenise(char *line, int num_read);

char *my_getvar(char *name);

char **pathtok(char *path);

char **lintok(char *lin, int num_read);

int size_env();

void uset_var(char *var);

void set_var(char *var, char *val);

void runcmd(char **args, char **envp, char **dir);



int _atoi(char *s);

int _putchar(char c);

void _puts(char *str);

char *_strcpy(char *dest, char *src);

int _strlen(char *s);

char *_strcat(char *dest, char *src);

void _puwl(char *str);

void _puwl(char *str);

char *_strdup(char *s);

int _strcmp(char *s1, char *s2);

int _strncmp(char *s1, char *s2, size_t n);





#endif
