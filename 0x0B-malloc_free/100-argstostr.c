#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate command-line arguments into a single string
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /* Account for space or newline character */
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	/* Concatenate the arguments into the string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n'; /* Add newline character after each argument */
		k++;
	}
	str[k] = '\0'; /* Add null terminator at the end of the string */

	return (str);
}
