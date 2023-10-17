#include "shell.h"

/**
 * handlePath - constructs a path and executes a command
 * @cmd: an array of strings including a comand and
 * its args
 */

void handlePath(char **cmd)
{
	const int size = 32;
	int i = 0, j = 0;
	char dir[] = "/usr/bin/";
	char path[32] = {0};

	while (dir[i])
	{
		path[i] = dir[i];
		i++;
	}

	while ((cmd[0])[j] && i < size - 1)
	{
		path[i] = (cmd[0])[j];
		i++;
		j++;
	}

	path[i] = '\0';

	if (execve(path, cmd, environ) == -1)
	{
		perror("execve");
		exit(EXIT_FAILURE);
	}
}
