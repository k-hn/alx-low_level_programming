#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all args of program
 *
 * @ac: arg counter
 * @av: arg array
 *
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int count, i, j;
	char *accum;
	int required_size = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < ac; count++)
	{
		required_size += strlen(av[count]);
	}

	/* malloc required_size */
	accum = malloc(sizeof(char) * (required_size + ac + 1));
	if (accum == NULL)
	{
		return (NULL);
	}

	/* begin concat */
	count = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			accum[count] = av[i][j];
			count++;
		}

		accum[count] = '\n';
		count++;
	}

	accum[count] = '\0';

	return (accum);
}
