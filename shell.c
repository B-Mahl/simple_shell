#include "shell.h"

/**
 * main - entry point of the shell program
 * Return: 0
 */
int main(void)
{
	char *line = NULL;
	char **args = NULL;
	size_t bufsiz = 0;

	while (1)
	{
		printPrompt();
		readInput(&line, &bufsiz);
		args = parseInput(line);

		if (args[0] != NULL && _strcmp(args[0], "exit") == 0)
		{
			free(line);
			free(args);
			exit(EXIT_FAILURE);
		}
		executeCommand(args);
		free(args);
	}
	free(line);
	return (0);
}
