#include "shell.h"

/**
 * interactive - interactive mode
*/
void interactive(void)
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
			exit(EXIT_SUCCESS);
		}
		executeCommand(args);
		free(args);
	}
}
