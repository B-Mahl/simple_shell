#include "shell.h"

/**
 * parseInput - parses input into array of strings
 * @str: string to parse
 * Return: array of string on success
 */

char **parseInput(char *str)
{
	int buffsize = 64;
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
		args[i] = token;
		token = strtok(NULL, " \n");
		i++;

		if (i >= buffsize)
		{
			buffsize *= 2;
			args = (char **)realloc(args, buffsize * sizeof(char *));

			if (args == NULL)
			{
				perror("buffer overflow");
				exit(EXIT_FAILURE);
			}
		}
	}

	args[i] = NULL;
	return (args);
}
