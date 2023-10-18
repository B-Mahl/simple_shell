#include "shell.h"

/**
 * non_interactive - non-interactive mode
 */

void non_interactive(void)
{
	char *line = NULL;
	char **args = NULL;
	size_t bufsiz = 0;

	if (getline(&line, &bufsiz, stdin) == -1)
	{
		perror("getline");
		exit(EXIT_FAILURE);
	}

	args = parseInput(line);

	if (args[0] != NULL && _strcmp(args[0], "exit") == 0)
	{
		free(line);
		free(args);
		exit(EXIT_SUCCESS);
	}

	executeComannd(args);
	free(args);
	free(line);
}
