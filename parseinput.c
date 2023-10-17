#include "shell.h"

/**
 * parseInput - parses input into array of strings
 * @str: string to parse
 * Return: array of string on success
 */

char **parseInput(char *str)
{
	int buffsize = 1020;
	char **args = (char **)malloc(buffsize * sizeof(char *));
	char *token = NULL;
	int i = 0;

	if (args == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	token = strtok(str, " \n");

	while (token)
	{
		if (token[0] == '#')
			break;

		args[i] = token;
		token = strtok(NULL, " \n");
		i++;

		if (i >= buffsize)
		{
			perror("buffer overflow");
			exit(EXIT_FAILURE);
		}
	}

	args[i] = NULL;
	return (ARGS);
}
