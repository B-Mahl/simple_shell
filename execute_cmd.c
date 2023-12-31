#include "shell.h"

/**
 * executeCommand - executes command
 * @args: command and arguments to be executed
 */
void executeCommand(char **args)
{
	int status;
	pid_t newProcess = fork();

	if (newProcess == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	if (newProcess == 0)
	{
		if (args[0] == NULL)
			exit(EXIT_SUCCESS);
		if (execve(args[0], args, environ) == -1)
		{
			if (_strcmp(args[0], "env") == 0)
				printEnv();
			handlePath(args);
			perror("execve");
			exit(EXIT_FAILURE);
		}
	} else
	{
		wait(&status);
	}
}
