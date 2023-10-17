#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_BUFFER 1020

extern char **environ;

char **parseInput(char *str);
void executeCommand(char **args);
void printPrompt(void);
int _strcmp(char *s1, char *s2);
void printEnv(void);
void readInput(char **lineptr, size_t *n);
int _strlen(char *str);
void handlePath(char **cmd);

#endif
