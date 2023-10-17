#include "shell.h"

/**
 * _strlen - calculates length of a string
 * @str: characters to count
 * Return: string length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if s1 and s2 are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	if (s1[i] != '\0')
		return (1);
	else if (s2[i] != '\0')
		return (-1);
	return (0);
}
