#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: number of arguments
 * @av: double pointer to arguments
 *
 * Return: NULL if failed, pointer to new string in case of success
 */

char *argstostr(int ac, char **av)
{
	int a, b, c, d;
	char *z;

	c = 0;
	d = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
		d++;
	}
	d++;
	z = malloc(d * sizeof(char));
	if (z == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			z[c] = av[a][b];
			c++;
		}
		z[c] = '\n';
		c++;
	}
	z[c] = '\0';
	return (z);
}
