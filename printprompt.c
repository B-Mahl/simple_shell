#include "shell.h"

/**
 * printPrompt - prints shell prompt to stdout
 */

void printPrompt(void)
{
	if (write(STDOUT_FILENO, "($)  ", 4) == -1)
	{
		perror("write");
		exit(EXIT_FAILURE);
	}
}
