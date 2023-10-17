#include "shell.h"

/**
 * readInput - reads user input from stdin
 * @lineptr: stores input string
 * @n: size of lineptr
 */
void readInput(char **lineptr, size_t *n)
{
	ssize_t len = getline(lineptr, n, stdin);

	if (len == -1)
	{
		perror("getline");
		exit(EXIT_FAILURE);
	}
	if (len > 0 && (*lineptr)[len - 1] == '\n')
		(*lineptr)[len - 1] = '\0';
}
