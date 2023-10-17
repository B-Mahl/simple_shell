#include "shell.h"

/**
 * printEnv - print the env variables to the stdoutput
 */

void printEnv(void)
{
	int i = 0;

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		i++;
	}

	write(STDOUT_FILENO, "\n", 1);
	exit(EXIT_FAILURE);
}
