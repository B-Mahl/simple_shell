#include "shell.h"

/**
 * main - entry point of the shell program
 * Return: 0
 */
int main(void)
{
	if (isatty(STDIN_FILENO))
		interactive();
	else
		non_interactive();

	return (0);
}
